#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double position(double, double, double, double);

int main(){
  double p, s, a, n, dt, t=0, i;
  cout << "enter the initial position, the speed and the acceleration: " << endl;
  cin >> p >> s >> a;
  cout << "how many times you want to display the position of the moving body? ";
  cin >> n;
  cout << "how often (in seconds) you want to update the position of the moving object? ";
  cin >> dt;

  cout << "Acceleration: " << a << " Initial speed: " << s << " Initial position: " << p << " Number of times: " << n << " Delta t: " << dt << endl;

  for (i=0; i<n; i++){
    cout << "At time " << t << " the position is " << position(p, s, a, t) << endl;
    t = t+dt;
  }
  
}

double position(double init_pos, double init_speed, double acc, double time){
  return init_pos + init_speed*time + 0.5*acc*(time*time);
}