#include<bits/stdc++.h>
using namespace std;

int closestToCentury(int runs[], int N) {
    int closest = 0;
    int minDifference = INT_MAX;
    for (int i = 0; i < N; ++i) {
        int difference = abs(runs[i] - 100);
        if (difference < minDifference) {
            minDifference = difference;
            closest = runs[i];
        }
    }
    return closest;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        int runs[N];
        for (int i = 0; i < N; ++i) {
            cin >> runs[i];
        }
        cout << closestToCentury(runs, N) << endl;
    }
    return 0;
}
