#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

void slp(int speed){
    std::chrono::milliseconds dura( speed );
    std::this_thread::sleep_for( dura );
}

void slowPrint(char c, int speed = 1000){
    std::cout << c << std::flush;
    slp(speed);
}

void slowPrint(std::string line, int speed = 1000){
    for(auto& character: line){
        slowPrint(character, speed);
    }
}
template <typename T>
void slowClear(T size, int speed){
    while(size-- != 0){
        slowPrint('\b', speed); slowPrint(' ', speed); slowPrint('\b', speed);
    }
}
int main(){
    std::vector<std::string> lines = { "dfgnan dfga", "ouiherfuahepufha ", "a[sioehf9wan3; nfsf" };
    for(auto& line : lines){
        slowPrint(line, 100);
        slowClear(line.size(), 20);
    }
    return 0;
}
