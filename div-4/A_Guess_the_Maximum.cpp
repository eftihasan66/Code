#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int max_k = 0;
        for (int i = 0; i < n - 1; ++i) {
            max_k = max(max_k, arr[i] - 1);
        }

        cout << max_k << endl;
    }

    return 0;
}
