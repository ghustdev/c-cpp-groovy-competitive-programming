// Start learn USACO Guide 

#include <bits/stdc++.h>

using namespace std;

int main() {
    string points; cin >> points;

    int a = 0;
    int b = 0;
    for (int i=1; i<points.size(); i+=2) {
        if (points[i-1] == 'A')
            a += points[i] - '0';
        else if (points[i-1] == 'B')
            b += points[i] - '0';

        if (a > 10 && b <= a - 2) {
            cout << "A";
            break;
        } 
        else if (b > 10 && a <= b - 2) {
            cout << "B";
            break;
        }
    }

    // cout << points[points.size() - 2];

    return 0;
}