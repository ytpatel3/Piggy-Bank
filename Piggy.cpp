#include <iostream>
#include <cstdio>
#include <sstream>
#include<algorithm>
#include <iomanip>
#include <string>
using namespace std;

class Piggy {
  public:
    void setName(string x) {
      name = x;//stores name in x
    }
  //constructor with essential info(not used in program)
  Piggy(float t, float a, string n, float w){
    average = a;
    name  = n;
    weeks = w;
    grandTotal = t;
  }

  void setAvg(float a) { //sets average to pass-through variable
    average = a;
  }
  float getAvg(){ //returns average
    return average;
  }
  void setTotal(float t){ //sets total to pass-through variable
    grandTotal = t;
  }
  float getTotal(){ //returns grand total
    return grandTotal;
  }
  string getName(){ //returns owner's name
    return name;
  }
  void setWeeks(float w){//sets weeks to pass-through variable
    weeks = w;
  }
  float getWeeks(){//returns weeks
    return weeks;
  }
  void setYearly(float y){//sets yearly savings to pass-through variable
    yearlySave = y;
  }
  float getYearly(){//returns yearly savings
    return yearlySave;
  }
  void setQuarters(float q){//sets quarters to pass-through variable
    quarters = q;
  }
  float getQuarters(){//returns quarters
    return quarters;
  }
  void setPennies(float p){//sets pennies to pass-through variable
    pennies = p;
  }
  float getPennies(){//returns pennies
    return pennies;
  }
  void setNickels(float n){//sets nickel to pass-through variable
    nickels = n;
  }
  float getNickels(){//returns nickels
    return nickels;
  }
  void setDimes(float d){//sets dimes to pass-through variable
    dimes = d;
  }
  float getDimes(){//returns dimes
    return dimes;
  }
    void calcAvg() { //equation method for calculating average based on total and time saved
      average = grandTotal/weeks;
  }
    void calcYearly() {//equation method for finding yearly savings
      yearlySave = average * 52;
  }
  void set_total2(float t){//sets total2 to pass-through variable
    total2 = t;
  }
  float gettotal2(){//returns total2
    return total2;
  }
  void final_amount(){//grand total including the interest rate for 1 year
    total2 = yearlySave;
  }

  void value() { //equation method for finding the total money entered
    //coins converted to usd to be displayed in the chart
    quarterVal = quarters * 0.25; //times 0.25 for quarters
    dimeVal = dimes * 0.10; //times 0.10 for dimes
    nickelVal = nickels * 0.05; //times 0.05 for nickels
    pennyVal = pennies * 0.01; //times 0.01 for pennies
  }

private:
  //private variable presets
  string name;
  float quarters;
  float dimes;
  float pennies;
  float nickels;
  float weeks;
  float average;
  float yearlySave;
  float grandTotal;
  float total2; 
  float quarterVal;
  float dimeVal;
  float nickelVal;
  float pennyVal;

};