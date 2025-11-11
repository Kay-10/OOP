#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int main () {
  ifstream tonk;
  tonk.open("test.txt");
  if(!tonk) {   cout << "Error. File corrupted or nonexistent"; return -1; }
  char ch;
  int space = 0, digits = 0, wcount = 0, cwcount = 0;
  string word, w;
  cout << "Enter a word to count for word occurrences: ";
  cin >> word;
  while(tonk.get(ch)) {
    if (isdigit(ch)) {  digits++; }
    else if (ispunct(ch)) { }
    else if (isalpha(ch)) { w+= ch; }
    if (isspace(ch)) {
      space++;
      if (w != "") {
        wcount++;
        if (w == word) { cwcount++; }
      }
      w = "";
    }
  }
  if (w != "") {
      wcount++;
      if (w == word) { cwcount++; }
  }
  cout << "Spaces: " << space << " Digits: " << digits << " Words: " << wcount << " Occurrences of " << word << ": " << cwcount << endl;
  return 0;
}
  
  
