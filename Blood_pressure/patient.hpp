#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include "blood.hpp"

using namespace std;

class Patient{
  

  private:
    string name_patient;
    vector<int> systolic = {};
    vector<int> diastolic = {};
    vector<string> dates = {};

  public:
  
    Patient(string name){
      name_patient = name;
    }
    
    void addRecord(Blood record){
      systolic.insert(systolic.end(), {record.sys});
      diastolic.insert(diastolic.end(), {record.dia});
      dates.insert(dates.end(), {to_string(record.date.day) + "/" + to_string(record.date.month) + "/" + to_string(record.date.year)});
      }
    
    void printReport(){
      cout << name_patient << endl;
      cout << "-----" << endl;
      int max = *max_element(systolic.begin(), systolic.end());
      int index = distance(systolic.begin(), max_element(systolic.begin(), systolic.end()));

      if (max >= 140){
      cout << "Max abnormal Systolic value = " << max << endl;
      cout << "Max corresponding Diastolic value = " << diastolic[index] << endl;
      cout << "Date max Systolic value = " << dates[index] << endl;
      }
      else {cout << "No measurament was too high" << endl;}

      cout << "---------------------------------" << endl;

      double sum_diastolic = 0;
      for(int i=0; i<=diastolic.size(); i++){
        sum_diastolic += diastolic[i];            
      }
      cout << "Average Diastolic preassure = " << sum_diastolic / diastolic.size() << endl;

      cout << "---------------------------------" << endl;

      cout << "Max Systolic value(s) = ";
      for (int i=1; i<=count(systolic.begin(), systolic.end(), max); i++){
        cout << max << " ";
      }
      cout << endl;

      cout << "---------------------------------" << endl;


    }
};
