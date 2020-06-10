#include <iostream>
using namespace std;

int main() {

  cout << "================================" << endl;
  cout << "Multiplication of 10 using Array" << endl;
  cout << "================================" << endl << endl;

  int tables[10] = {1,2,3,4,5,6,7,8,9,10};

  int len = sizeof(tables) / sizeof(tables[0]);

  for (int i = 1; i <= len; ++i) {
    int multiply = i * 10;
    cout << i << " * 10 = " << multiply << endl;
  }


  return 0;
}
