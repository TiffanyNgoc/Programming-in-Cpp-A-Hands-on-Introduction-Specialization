// You are given the following code:
#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }
    
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
// Requirements
// Create a few class functions that do the following for the Subway class:
GetPassengers - Returns the current number of passengers without any parameters.
Board - Accepts a positive integer that represents the number of passengers boarding the subway. To accept only positive integers, use a conditional such as if (p >= 0). It also uses the CalculateFares function to keep track of how much fares have been collected every time a passenger boards the subway.
CalculateFares - Calculates fares for all existing passengers on the subway and adds it to total_fares. This is a helper function inside the Board function.
NOTE: In C++, it is a best practice to make helper class functions private; however, you will not lose credit for making them public in this assignment.
Disembark - Accepts a positive integer that represents the number of passengers exiting the subway. There cannot be a negative number of passengers on a subway. The fewest number of passengers on a subway is 0. Use a conditional or loop to meet these requirements.
GetFares - Returns the current total fares that have been collected as a double.
DO NOT EDIT the existing code in main or you will not pass the test:
Subway s;
cout << s.GetPassengers() << endl;
s.Board(23);
s.Disembark(12);
cout << s.GetPassengers() << endl;
cout << s.GetFares() << endl;
// Expected Output
0
11
55.2

// Solved Code
#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
public:
    Subway() {
        passengers = 0;
        total_fares = 0;
    }

    int GetPassengers() const {
        return passengers;
    }

    void Board(int p) {
        if (p >= 0) {
            passengers += p;
            CalculateFares();
        }
    }

    void Disembark(int p) {
        if (p >= 0) {
            passengers = max(0, passengers - p);
        }
    }

    double GetFares() const {
        return total_fares;
    }

private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;

    void CalculateFares() {
        total_fares += passengers * fare;
    }
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
