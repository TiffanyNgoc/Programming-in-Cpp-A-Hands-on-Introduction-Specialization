// Use the base class PiggyBank to help you solve this exercise. Create the derived class Cash so that it has the following functions:
DisplayBills - function that prints all of the dollar bills’ quantity in order of increasing amount
DisplayCashTotal - function that prints the value of all of the dollar bills combined
// Given Code
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class PiggyBank {
  public:
    PiggyBank(int o, int f, int tn, int tw) {
      ones = o;
      fives = f;
      tens = tn;
      twenties = tw;
    }
  
    int GetOnes() {
      return ones;
    }
  
    void SetOnes(int new_ones) {
      ones = new_ones;
    }
  
    int GetFives() {
      return fives;
    }
  
    void SetFives(int new_fives) {
      fives = new_fives;
    }
  
    int GetTens() {
      return tens;
    }
  
    void SetTens(int new_tens) {
      tens = new_tens;
    }
  
    int GetTwenties() {
      return twenties;
    }
  
    void SetTwenties(int new_twenties) {
      twenties = new_twenties;
    }
  
  private:
    int ones;
    int fives;
    int tens;
    int twenties;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////

  
  
  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Cash c(1, 2, 3, 4);
  c.DisplayBills();
  c.DisplayCashTotal();
  Cash c2(9, 8, 7, 6);
  c2.DisplayBills();
  c2.DisplayCashTotal();

  //DO NOT EDIT code above this line
  
  return 0;
  
}
// Requirements
Produce the expected output using concepts of inheritance.
// DO NOT EDIT the specified code or you might not receive credit for your work!
// Expected Output
One-dollar bill: 1
Five-dollar bill: 2
Ten-dollar bill: 3
Twenty-dollar bill: 4
Total amount: 121
One-dollar bill: 9
Five-dollar bill: 8
Ten-dollar bill: 7
Twenty-dollar bill: 6
Total amount: 239

// Solved Code
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class PiggyBank {
  public:
    PiggyBank(int o, int f, int tn, int tw) {
      ones = o;
      fives = f;
      tens = tn;
      twenties = tw;
    }
  
    int GetOnes() {
      return ones;
    }
  
    void SetOnes(int new_ones) {
      ones = new_ones;
    }
  
    int GetFives() {
      return fives;
    }
  
    void SetFives(int new_fives) {
      fives = new_fives;
    }
  
    int GetTens() {
      return tens;
    }
  
    void SetTens(int new_tens) {
      tens = new_tens;
    }
  
    int GetTwenties() {
      return twenties;
    }
  
    void SetTwenties(int new_twenties) {
      twenties = new_twenties;
    }
  
  private:
    int ones;
    int fives;
    int tens;
    int twenties;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////

  
public:
    Cash(int o, int f, int tn, int tw) : PiggyBank(o, f, tn, tw) {}
  
    void DisplayBills() {
      cout << "One-dollar bill: " << GetOnes() << endl;
      cout << "Five-dollar bill: " << GetFives() << endl;
      cout << "Ten-dollar bill: " << GetTens() << endl;
      cout << "Twenty-dollar bill: " << GetTwenties() << endl;
    }
  
    void DisplayCashTotal() {
      cout << "Total amount: "; 
      cout << GetOnes() + GetFives() * 5 + GetTens() * 10 + GetTwenties() * 20;
      cout << endl;
    }
};
  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Cash c(1, 2, 3, 4);
  c.DisplayBills();
  c.DisplayCashTotal();
  Cash c2(9, 8, 7, 6);
  c2.DisplayBills();
  c2.DisplayCashTotal();

  //DO NOT EDIT code above this line
  
  return 0;
  
}
