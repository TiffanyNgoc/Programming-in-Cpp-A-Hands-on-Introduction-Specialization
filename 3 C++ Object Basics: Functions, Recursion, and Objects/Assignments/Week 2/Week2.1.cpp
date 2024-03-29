// Write a recursive function called RecursiveSum() that takes an integer as a parameter. Then it returns the sum of all integers between 0 and the integer passed to RecursiveSum(). For example, if the argument is 5, then the returned value will be 0 + 1 + 2 + 3 + 4 + 5 which is 15.
// DO NOT edit any existing code or you will not receive credit for your work!
#include <iostream>
using namespace std;

//add function definitions below this line



//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}

// Expected Output
// If the function call is RecursiveSum(5), then the function will return 15.
// If the function call is RecursiveSum(1), then the function will return 1.

// Solved Code
#include <iostream>
using namespace std;

//add function definitions below this line

int RecursiveSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + RecursiveSum(n - 1);
    }
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}
