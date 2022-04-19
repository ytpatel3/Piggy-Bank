 /*
Name: Yash Patel
Program: OOP Piggy Bank Program
Date: 1/7/21
Extra: Prints a final message beneath everything.
*/

#include "Worksheets.h"
#include "GetData.h"
#include "MyFunctions.h"
#include "Piggy.cpp" //OOP file
#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

void worksheet1(string namedItem) {
  string dummy;

  cout << endl << "Program: " << namedItem << endl << endl;
  
  //initialize variables; most will be floats because of OOP
  string name = "";
  float quarters;
  float dimes;
  float nickels;
  float pennies;
  float total = 0.0;
  float average;
  float weeks;

  Piggy bank(total, average, name, weeks); //object with necessary paramters

  cout << "Name: ";
  getline(cin, name); //user starts entering all his information
  bank.setName(name); //start of OOP

  do {
    cout << "Quarters: ";
  }
  while(!getValidFloat(quarters) || quarters < 0); //error trapping to make sure user enters valid integers
  bank.setQuarters(quarters); //sets quarters

  do {
    cout << "Dimes: ";
  }
  while(!getValidFloat(dimes) || dimes < 0); //error trapping to make sure user enters valid integers
  bank.setDimes(dimes); //sets dimes

  do {
    cout << "Nickels: ";
  }
  while(!getValidFloat(nickels) || nickels < 0); //error trapping to make sure user enters valid integers
  bank.setNickels(nickels); //sets nickels

  do {
    cout << "Pennies: ";
  }
  while(!getValidFloat(pennies) || pennies < 0); //error trapping to make sure user enters valid integers
  bank.setPennies(pennies); //sets pennies

  do {
    cout << "Weeks: ";
  }
  while(!getValidFloat(weeks) || weeks <= 0); //error trapping to make sure user enters valid integers

  bank.setTotal(total); //sets total
  bank.setWeeks(weeks); //sets weeks; greater than 0 because you can have 0 weeks of saving
  bank.value();
  std::cout.precision(2); //sets decimal point for the total monetary value
  std::cout.setf(std::ios::fixed);
  bank.calcAvg();
  bank.calcYearly(); //calls method to average savings per week and year

  //variables to calculate total (will be multiplyed by monetary value for the respective coins)
  float quarterVal = 0.0;
  float dimeVal = 0.0;
  float nickelVal = 0.0;
  float pennyVal = 0.0;

  //coins converted to usd to be displayed in the chart
  double quarterValm = quarters * 0.25; //times 0.25 for quarters
  double dimeValm = dimes * 0.10; //times 0.10 for dimes
  double nickelValm = nickels * 0.05; //times 0.05 for nickels
  double pennyValm = pennies * 0.01; //times 0.01 for pennies
  float grandTotal = quarterValm + dimeValm + nickelValm + pennyValm;
  float avg = (quarterValm + dimeValm + nickelValm + pennyValm) / weeks;
  float week52 = avg * 52;

  //chart that neatly displays the input and output
  cout << "\n" << name << " has the following in their piggy bank:\n\n";
  cout << setw(15) << left;
  cout << "Coin Type" << "Amount" << "         Value";
  cout << "\n--------------------------------------------------\n";
  //quarters
  cout << setw(15) << left;
  cout << "Quarters" << quarters << "              ";
  cout << "$";
  cout << fixed;
  cout << setprecision(2);
  cout << quarterValm;
  cout << "\n";
  //dimes
  cout << setw(15) << left;
  cout << "Dimes" << dimes << "              ";
  cout << "$";
  cout << fixed;
  cout << setprecision(2);
  cout << dimeValm;
  cout << "\n";
  //nickels
  cout << setw(15) << left;
  cout << "Nickels" << nickels << "              ";
  cout << "$";
  cout << fixed;
  cout << setprecision(2);
  cout << nickelValm;
  cout << "\n";
  //pennies
  cout << setw(15) << left;
  cout << "Pennies" << pennies << "              ";
  cout << "$";
  cout << fixed;
  cout << setprecision(2);
  cout << pennyValm;

  cout << "\n\nGrand Total: $" << grandTotal << "\n";
  cout << bank.getName() << ", you're earning an average of $" << avg << " per week!\n";
  cout << bank.getName() << ", at this rate you can save $" << week52 << " in one year!\n\n"; //final messages

  //extra
  int coins = quarters + nickels + dimes + pennies;
  cout << "You have " << coins << " coins in your piggy bank. Might want to look for an ATM some time.\n\n";
}