#include <map>
#include <iostream>
#include <stdlib.h>
#include <functional>

std::map<char, std::function<int(int,int)>> ops = {
    {'+', [](int a, int b){return a+b;}},
    {'-', [](int a, int b){return a-b;}},
    {'*', [](int a, int b){return a*b;}},
    {'/', [](int a, int b){return a/b;}}
};

auto main(int argc, char** argv) -> int {  
    std::cout << ops[argv[2][0]](atoi(argv[1]), atoi(argv[3])) << std::endl;
    return 0;
}
