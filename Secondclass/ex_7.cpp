#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


long long power(int a, int n);
long long power_1(int a, int n);
int count=0;
int count_1=0;

int main(){
  int a, n, i;
  cout << "a: ";
  cin >> a;
  cout << "n: ";
  cin >> n;
  for(i=0; i<=n; i++){
    ::count=0, ::count_1=0;
    cout << "the result for the firt version is: " << power(a, i) << " it took " << count << " iterations." << endl;
    cout << "the result for the second version is: " << power_1(a, i) << " it took " << count_1 << " iterations." << endl;
  }

}

long long power(int a, int n){
  ::count +=1;
  if (n==0){
    return 1;
  }
  else{
    return a*(power(a, n-1));
    n = n-1;
  }
}


long long power_1(int a, int n){
  ::count_1 +=1;
  if (n==0){
    return 1;
  }
  if (n%2==0){
    return power_1(a, n/2) * power_1(a, n/2);
    n = n-1;
  }
  else{
    return a * power_1(a, (n-1)/2) * power_1(a, (n-1)/2);
    n = n-1;
  }
}

//The number of iterations in the first version is n+1, the number of iterations in the second version is 