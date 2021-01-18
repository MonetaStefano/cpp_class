#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


long long fib(long long a, long long b, int n);
int count=0;

int main(){
  static int n;
  int i;
  long long a=0, b=1;
  cout << "n: ";
  cin >> n;

  cout << "The function has run " << count << " times and the value is " << fib(a, b, n);
}

long long fib(long long a, long long b, int n){
  long long temp;
  
  if (count==n){
    cout << a << endl;
    return a;
    }
    
  ::count +=1;

  temp = a;
  a = b;
  b = b+temp;
  
  fib(a, b, n); 
  return 0;
}