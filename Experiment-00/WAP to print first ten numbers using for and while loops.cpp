#include <iostream>
using namespace std;

int main () {
  int i;
  cout << "The first ten numbers (f-loop): " << endl;
  for(i = 1; i <= 10; i++) { cout << i << "\t"; }
  i = 10;
  cout << "\nThe first ten numbers (w-loop): " << endl;
  while(i >= 1) { cout << i << "\t"; i--; }
  return 0;
}
