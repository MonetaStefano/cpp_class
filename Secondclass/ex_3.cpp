#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void swap(int *x, int *y);

int main(){
  int x, y;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;

  swap(&x, &y);

  cout << "x: " << x << " y: " << y;


void swap(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
