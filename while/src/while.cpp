#include <iostream>
using namespace std;

int main() {

  int i = 1;

  cout << "Looping 5 times with i(5) <= 5 condition: " << endl;
  while(i <= 5) {
    cout << "Line " << i << ": Hello " << endl;
    i++;
  }

  return 0;
}
