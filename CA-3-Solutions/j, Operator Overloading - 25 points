/* Question:
You are given a main() function which takes a set of inputs to create two matrices and prints the result of their addition. 
You need to write the class Matrix which has a member a of type vector<vector<int> >. 
You also need to write a member function to overload the operator +. The function's job will be to add two objects of Matrix type and return the resultant Matrix.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
  vector<vector<int>> m;
  int rows;
  int cols;
  public:
  Matrix(int r, int c) : rows(r), cols(c) {
    m.resize(rows);
    for(int i = 0; i < r; i++) {
        m[i].resize(cols, 0);
    }
  }
  
  Matrix operator+ (const Matrix &m2) const {
    Matrix result(rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result.m[i][j] = this->m[i][j] + m2.m[i][j];
        }
    }
    return result;
  }
  
  void addData(int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int w;
            cin >> w;
            m[i][j] = w;
        }
    }
    return;
  }
  
  void showData() {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return;
  }
};
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int r, c;
        cin >> r >> c;
        Matrix M1(r, c);
        Matrix M2(r, c);
        M1.addData(r, c);
        M2.addData(r,c);
        Matrix M3 = M1 + M2;
        M3.showData();
    }
    return 0;
}
