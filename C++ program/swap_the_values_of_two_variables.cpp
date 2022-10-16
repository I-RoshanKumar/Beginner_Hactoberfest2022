#include<bits/stdc++.h>
using namespace std;

void swap_using_extra_var(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void swap_without_third_var(int &a, int &b){
  a = a + b;
  b = a - b;
  a = a - b;
}

int main(){
  int a = 3, b = 4, c = 10, d = 20;
  swap_using_extra_var(a, b);
  cout << a << " " << b << endl;
  swap_without_third_var(c, d);
  cout << c << " " << d << endl;
  return 0;
}