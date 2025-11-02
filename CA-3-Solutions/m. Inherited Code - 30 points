/* Question:
You inherited a piece of code that performs username validation for your company's website. The existing function works reasonably well, but it throws an exception when the username is too short. 
Upon review, you realize that nobody ever defined the exception. The inherited code is provided for you in the locked section of your editor. 
Complete the code so that, when an exception is thrown, it prints Too short: n (where n is the length of the given username).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void checkUsername(string username) {
    int n = username.length();

    if (n < 5) {
        cout << "Too short: " << n << endl;
        return;
    }

    bool isOk = true;
    for(int i = 0; i < n - 1; i++) {
        if(username[i] == 'w' && username[i+1] == 'w') {
            isOk = false;
            break;
        }
    }
    
    if(isOk == false) {
        cout << "Invalid" << endl;
    }
    else { 
        cout << "Valid" << endl; 
    }
    return;
}

int main() {
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        string s;
        cin >> s;
        checkUsername(s);
    }
    return 0;
}
