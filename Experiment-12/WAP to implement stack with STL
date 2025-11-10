#include <iostream>
#include <stack>
using namespace std;

int main () {
  stack<int>st;
  st.push(13);
  st.push(27);
  st.push(39);
  st.pop();
  st.push(43);
  st.push(56);
  cout << st.top() << endl;
  st.pop();
  st.pop();
  cout << st.top() << endl;
  st.push(33);
  cout << "The stack now is: " << endl;
  while(!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }
  cout << "Stack Emptied";
  return 0;
}
