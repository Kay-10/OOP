/* Question:
Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person.
The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. 
The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor.
The class Student should have two data members: marks, which is an array of size 6 and cur_id. It has two member functions: getdata and putdata. 
The function getdata should get the input from the user: the name, age, and the marks of the student in 6 subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student.
For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from 1.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
  public:
  int age;
  string name;
  virtual void getdata() { cin >> this->name >> this->age;  }
  virtual void putdata() { cout << this-> name << " " << this-> age << endl;}  
};

class Professor: public Person {
  public:
  int pub, cur_id;
  static int id;
  Professor() {
    cur_id = id++;
  } 
  void getdata() { cin >> this->name >> this->age >> this-> pub; }
  void putdata() { cout << this->name << " " << this->age << " " << this-> pub << " " << this->cur_id << endl; }
};

class Student: public Person {
  public:
  int marks[6], cur_id, sum = 0;
  static int id;
  Student() {
    cur_id = id++;
  } 
  void getdata() { 
    cin >> this->name >> this->age;
    for (int i=0; i<6; i++) {
        cin >> marks[i];
        sum += marks[i];
    }
  }
  void putdata() { cout << this->name << " " << this->age << " " << this->sum << " " << this->cur_id << endl; }
};
int Professor::id = 1, Student::id = 1;

int main() {
    int t;
    cin >> t;
    while (t--) {
        Person* a;
        int x;
        cin >> x;
        if(x == 1) {
            a = new Professor;
        }
        else if(x == 2) {
            a = new Student;
        }
        else { return -1; }
        
        a->getdata();
        a->putdata();
        delete a;
    }
    return 0;
}
