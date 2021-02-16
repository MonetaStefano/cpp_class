#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Date {

  public :
    int day; 
    int month; 
    int year;
    
    Date(){
      day = month = year = 0;
    }
    Date(int d, int m, int y){
      day = d;  
      month = m; 
      year = y;
    }
};
