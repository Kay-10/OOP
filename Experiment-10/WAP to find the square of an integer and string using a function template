#include <iostream>
using namespace std;

template<class T> T sq (T x) { return x * x; }
template <> string sq<string>(string s) { return (s+s); }

int main () {
  int i = 4;
  cout << i << " => " << sq(i) << endl;
  string w = "uvula";
  cout << w << " => " << sq(w) << endl;
  return 0;
}
