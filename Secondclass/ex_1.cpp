#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double distance(double, double, double, double);

int main(){
  double x1, y1, cx, cy, r;
  cout << "x1: ";
  cin >> x1;
  cout << "y1: ";
  cin >> y1;

  cout << "x of center: ";
  cin >> cx;
  cout << "y of center: ";
  cin >> cy;
  cout << "radium: ";
  cin >> r;

  if (distance(x1, y1, cx, cy) <= r){
    cout << "the point is in the circle";
  }
  else{
    cout << "the point is not in the circle";
  }
}

double distance(double x1, double y1, double cx, double cy){
  return sqrt((x1-cx)*(x1-cx) + (y1-cy)*(y1-cy));
}
