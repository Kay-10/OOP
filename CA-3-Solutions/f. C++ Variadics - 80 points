/* Question:
1. 
Create a template function named reversed_binary_value. It must take an arbitrary number of bool values as template parameters. 
These booleans represent binary digits in reverse order. 
Your function must return an integer corresponding to the binary value of the digits represented by the booleans

2.
Input Format:
The first line contains an integer, t, the number of test cases. Each of the t subsequent lines contains a test case. A test case is described as 2 space-separated integers,
x (value to compare against) and y (range to compare - 64y to 64y + 63)
The number of template parameters passed to reversed_binary_value will be 16.
Output Format
Each line of output contains 64 binary characters (i.e., 0's and 1's). Each character represents one value in the range. 
The first character corresponds to the first value in the range. The last character corresponds to the last value in the range. 
The character is 1 if the value in the range matchesx ; otherwise, the character is 0.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<utility>
using namespace std;


//Part 1
template <typename T, T...indexsequence> class integer_sequence;
template<bool... Args, size_t...indexsequence> constexpr int hf(index_sequence<indexsequence...>) { 
    return (0 + ... + (Args* (1 << indexsequence)));
}
template<bool... Args> constexpr int reversed_binary_value() {
    constexpr size_t N = sizeof...(Args);
    return hf<Args...>(make_index_sequence<N>{}):
} 

//Part 2
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        int S = 64 * y;
        string boolrange;
        for (int j = 0; j <= 63; j++) {
            boolrange += (S+j == x) ? "1" : "0";
        }
        cout << boolrange << endl;
    }
    return 0;
}
