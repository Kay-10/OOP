#include <iostream>
using namespace std;

class Result2;
class Result1 {
  float r1;
  public:
    void getData() {
      cout << "Enter marks for subject 1: ";
      cin >> r1;
    }
    friend float getAvg(Result1 &a, Result2 &b);
}r1;

class Result2 {
  float r2;
  public:
    void getData() {
      cout << "Enter marks for subject 2: ";
      cin >> r2;
    }
    friend float getAvg(Result1 &a, Result2 &b);
}r2;

float getAvg(Result1 &a, Result2 &b) { return ((a.r1 + b.r2)/2); }

int main () {
  r1.getData();
  r2.getData();
  cout << "Average marks of the student is " << getAvg(r1, r2);
  return 0;
}
