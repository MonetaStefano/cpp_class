#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


long long fib(int);

int main(){
  int n;
  cout << "n: ";
    cin >> n;
  cout << fib(n);


long long fib(int n){
  long long i, a=0, b=1, temp;
  if (n==0){
    return a;
  }
  for (i=1; i<n; i++){
    temp = a+b;
    a = b;
    b = temp; 
  }
  return b;
