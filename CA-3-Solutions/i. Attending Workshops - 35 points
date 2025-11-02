/* Question:
A student signed up for n workshops and wants to attend the maximum number of workshops where no two workshops overlap. 
Return the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.
Implement two structures - Workshop and Available_Workshops and two functions Available_Workshops* init (int start_time[]. int duration[], int n) amd int CalculateMaxWorkshops(Available_Workshops* ptr) to achieve this.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Workshop {
    int startTime;
    int duration;
    int endTime;
};

struct Available_Workshops {
    int n;
    Workshop* arr;
};

Available_Workshops* init (int start_time[], int duration[], int n) {
    Available_Workshops* student = new Available_Workshops;
    student->n = n;
    student->arr = new Workshop[n];
    for(int i = 0; i < n; i++) {
        student->arr[i].startTime = start_time[i];
        student->arr[i].duration = duration[i];
        student->arr[i].endTime = start_time[i] + duration[i];
    }
    return student;
}

int CalculateMaxWorkshops(Available_Workshops* student) {
    sort(student->arr, student->arr + student->n, [] (const Workshop &a, const Workshop &b) {return a. endTime < b.endTime;});
    int count = 0, lftime = 0;
    for(int i = 0; i < student->n; i++) {
        if(student->arr[i].startTime >= lftime) {
            count++;
            lftime = student->arr[i].endTime;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    int start_time[t], duration[t];
    for(int i = 0; i < t; i++) {
        int m;
        cin >> m;
        start_time[i] = m;
    }
    for(int i = 0; i < t; i++) {
        int m;
        cin >> m;
        duration[i] = m;
    }
    Available_Workshops* student = init(start_time, duration, t);
    int max = CalculateMaxWorkshops(student);    
    cout << max;
    return 0;
}
