#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include "date.hpp"

using namespace std;

class Blood{
  public:
    int sys; 
    int dia; 
    Date date;

    Blood(int s, int d, Date dat){
      sys = s;
      dia = d;
      date = dat;
    }

};