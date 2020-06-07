//============================================================================
// Name        : randomize.cpp
// Author      : Surajit Basak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main() {
   vector<int> arr;
   unsigned seed = 0;
   for (int j = 1; j < 20; ++j) //generate 20 numbers and add them into vector arr
   arr.push_back(j);
   shuffle(arr.begin(), arr.end(), default_random_engine(seed));
   cout << "arr elements:";
   for (vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
   cout << ' ' << *i;
   cout << endl;
   return 0;
}
