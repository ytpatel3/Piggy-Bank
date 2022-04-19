#include <iostream>
#include <string>
#include <iomanip>
#include "Worksheets.h"
using namespace std;

int main() {

  bool runAgain = false;
  string answer = "n";
  string dummy;

  string name1 = "OOP Piggy Bank";

   do {
      worksheet1(name1);
      cout << "Press Y to run again. Any other character to proceed: ";
      getline(cin, answer);
      if (answer == "y" || answer == "Y") {
          runAgain = true;
      }
      else {
          runAgain = false;
      }
  } while (runAgain);


}