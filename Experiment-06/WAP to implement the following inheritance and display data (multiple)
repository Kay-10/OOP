#include <iostream>
using namespace std;

class Academic {
  protected:
    int marks;
};

class Sport {
  protected:
    int score;
};

class Result: protected Academic, protected Sport {
  int result;
  public:
    void getData() {
      cout << "Enter marks: ";
      cin >> marks;
      cout << "Emter sports score: ";
      cin >> score;
    }
    void result(Result &r1) {
      r1.result = r1.score + r1.marks;
      cout << "Total result: " << r1.result;
    }
}obj;

int main () {
  obj.getData();
  obj.result(obj);
  return 0;
}
