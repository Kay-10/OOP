/* Question:
Given a set of arrays of size N and an integer K, you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.
*/

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        deque<int> dq;
        for (int i = 0; i < n; ++i) {
            while (!dq.empty() && arr[i] >= arr[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if (dq.front() == i - k) {
                dq.pop_front();
            }
            if (i >= k - 1) {
                cout << arr[dq.front()] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
