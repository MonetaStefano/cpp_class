#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
  int n, i, x;
  static int k = 1;
  cout << "n: ";
  cin >> n;
  
  for (i=0; i<n; i++){
    for (x=0; x<=i; x++){
      cout << k << " ";
      k += 1;
    }
    cout << "" << endl;
  }
