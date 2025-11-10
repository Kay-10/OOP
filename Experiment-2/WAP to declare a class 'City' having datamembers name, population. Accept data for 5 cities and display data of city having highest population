#include <iostream>
#include <string>
using namespace std;

class City {
  string name;
  public:
    int pop;
    void getData() {
      cout << "Enter City Name: ";
      getline(cin, name);
      cout << "Enter " << name <<"'s population: ";
      cin >> pop;
    }
    void putData() {
      cout << "The city having the largest population is: " << name;
    }
}c[5];

int main () {
  int max = 0, mpop = 0;
  for(int i = 0; i < 5; i++) {
    c[i].getData();
    cin.ignore(256, '\n');
    if (mpop < c[i].pop) {
        max = i;
        mpop = c[i].pop;
    }
  }
  c[max].putData();
  return 0;
}
