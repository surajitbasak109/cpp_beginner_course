#include <iostream>
using namespace std;

int main()
{

  cout << "Array of integers" << "\n";
  cout << "=================" << "\n";

  int values[3];
  values[0] = 88;
  values[1] = 123;
  values[2] = 7;

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

  cout << endl << "Array of doubles" << "\n";
  cout << "================" << "\n";

  double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

  for (int i = 0; i < 4; i++) {
    cout << "Element at index " << i << ": " << numbers[i] << endl;
  }

  cout << endl << "Initializing with zero values" << "\n";
  cout << "=============================" << endl;

  int numberArray[8] = {};

  for (int i = 0; i < 8; i++) {
    cout << "Element at index " << i << ": " << numberArray[i] << endl;
  }

  // Array of Strings
  cout << endl << "Array of Strings" << "\n";
  cout << "================" << endl;
  string texts[] = {"apple", "banana", "orange", "pineapple"};

  for (int i = 0; i < 4; i++) {
    cout << "Element at index " << i << ": " << texts[i] << endl;
  }
  return 0;
}
