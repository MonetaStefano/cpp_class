#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

//double area_circle(double);

//int main(){
//  double r;
//  cout << "radius: ";
//  cin >> r;
//  cout << "area: " << area_circle(r) << endl;
//  return 0;
//}

//double area_circle(double rad){
//  return rad*rad*acos(-1);
//}


//int main(){
//  double pi;
//  pi=acos(-1);
//  cout << "pi: " << pi << endl;
//  cout << "square root of 2: " << sqrt(2) << endl;

//  return 0;
//}


// EX 1

//double distance(double, double, double, double);

//int main(){
//  double x1, y1, cx, cy, r;
//  cout << "x1: ";
//  cin >> x1;
//  cout << "y1: ";
//  cin >> y1;

//  cout << "x of center: ";
//  cin >> cx;
//  cout << "y of center: ";
//  cin >> cy;
//  cout << "radium: ";
//  cin >> r;

//  if (distance(x1, y1, cx, cy) <= r){
//    cout << "the point is in the circle";
//  }
//  else{
//    cout << "the point is not in the circle";
//  }
//}

//double distance(double x1, double y1, double cx, double cy){
//  return sqrt((x1-cx)*(x1-cx) + (y1-cy)*(y1-cy));
//}


//EX 2

//double position(double, double, double, double);

//int main(){
//  double p, s, a, n, dt, t=0, i;
//  cout << "enter the initial position, the speed and the acceleration: " << endl;
//  cin >> p >> s >> a;
//  cout << "how many times you want to display the position of the moving body? ";
//  cin >> n;
//  cout << "how often (in seconds) you want to update the position of the moving object? ";
//  cin >> dt;

//  cout << "Acceleration: " << a << " Initial speed: " << s << " Initial position: " << p << " Number of times: " << n << " Delta t: " << dt << endl;

//  for (i=0; i<n; i++){
//    cout << "At time " << t << " the position is " << position(p, s, a, t) << endl;
//    t = t+dt;
//  }
  
//}

//double position(double init_pos, double init_speed, double acc, double time){
//  return init_pos + init_speed*time + 0.5*acc*(time*time);
//}


//EX 3

//void swap(int *x, int *y);

//int main(){
//  int x, y;
//  cout << "x: ";
//  cin >> x;
//  cout << "y: ";
//  cin >> y;

//  swap(&x, &y);

//  cout << "x: " << x << " y: " << y;
//}

//void swap(int *x, int *y){
//  int temp;
//  temp = *x;
//  *x = *y;
//  *y = temp;
//}


//EX 4

//int main(){
//  int n, i, x;
//  static int k = 1;
//  cout << "n: ";
//  cin >> n;
  
//  for (i=0; i<n; i++){
//    for (x=0; x<=i; x++){
//      cout << k << " ";
//      k += 1;
//    }
//    cout << "" << endl;
//  }
//}


//EX 5

//long long fib(int);

//int main(){
//  int n;
//  cout << "n: ";
//  cin >> n;
//  cout << fib(n);
//}

//long long fib(int n){
//  long long i, a=0, b=1, temp;
//  if (n==0){
//    return a;
//  }
//  for (i=1; i<n; i++){
//    temp = a+b;
//    a = b;
//    b = temp; 
//  }
//  return b;
//}


//EX 6

//long long fib(long long a, long long b, int n);
//int count=0;

//int main(){
//  static int n;
//  int i;
//  long long a=0, b=1;
//  cout << "n: ";
//  cin >> n;
//  cout << "The function has run " << count << " times and the value is " << fib(a, b, n);
//}

//long long fib(long long a, long long b, int n){
//  long long temp;
  
//  if (count==n){
//    cout << a << endl;
//    return a;
//  }
  
//  temp = a;
//  a = b;
//  b = b+temp;
//  ::count +=1;
//  fib(a, b, n); 
//  return 0;
//}


//EX 7


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