#include <iostream>
using namespace std;

int main() {    
    int a, b;
    char op;
    cin >> a >> op >> b;
    cout << (op & 4) * 
        (
                (op & 2 )*(a/b)/2 + ( (op+2) & 2)*(a-b)/2
        ) / 4 
        + ((op+4) & 4) * 
        (
                (op & 1)*(a+b) + ( (op+1 )&1)*(a*b) 
        ) / 4
        << endl;   
    return 0;
}
