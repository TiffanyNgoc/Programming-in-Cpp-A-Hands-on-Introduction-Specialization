// Create a class or struct called Person and set it up so the code in main will print the expected output below.
// Hint: Create one static member attribute and one static member function and make them both public.
// Requirement(s)
// You CANNOT add or make any changes to the specified code section, otherwise, you might not receive credit for your work!
// Given Code
#include <iostream>
using namespace std;

//add definitions below this line



//add definitions above this line

//DO NOT EDIT code below this line

string Person::name = "Name";

int main() {
  
  Person::name = "Peter Parker";
  cout << Person::GetName() << endl;
  Person::name = "Tony Stark";
  cout << Person::GetName() << endl;
  
  return 0;
  
}

//DO NOT EDIT code above this line
// Expected Output
Peter Parker
Tony Stark

// Solved Code
#include <iostream>
using namespace std;

//add definitions below this line

class Person {
public:
    static string name;

    static string GetName() {
        return name;
    }
};

//add definitions above this line

//DO NOT EDIT code below this line

string Person::name = "Name";

int main() {
  
  Person::name = "Peter Parker";
  cout << Person::GetName() << endl;
  Person::name = "Tony Stark";
  cout << Person::GetName() << endl;
  
  return 0;
  
}

//DO NOT EDIT code above this line
