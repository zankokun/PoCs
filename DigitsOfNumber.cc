#include <iostream>
using namespace std;
int main(){
  int a; // a < 1`000`000
  cin >> a;
  int b = 1000000;
  // находим b одинаковое по разрядам с а 
  while(a / b == 0){
    b = b / 10;
  }
  // выводим самый левый разряд а пока это возможно
  while(a!=0){
    cout << a / b << " ";
    a = a % b;
    b = b / 10;
  }
  cout << endl;

  return 0;

}


