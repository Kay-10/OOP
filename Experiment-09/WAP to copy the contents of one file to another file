#include<iostream>
#include<fstream>
using namespace std;

int main () {
  ifstream one;
  one.open("first.txt");
  ofstream two;
  two.open("second.txt");
  if(!one || !two) { cout << "Error!"; return -1; }
  char ch;
  while(one.get(ch)) { two.put(ch); }
  cout << "Text copied successfully!";
  one.close();
  two.close();
  return 0;
}
