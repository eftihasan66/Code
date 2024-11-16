#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int x, y, T;
    cin >> x >> y >> T;
    
    bool possible = false;
    for (int i = 0; i <= T / x; ++i) 
    {
        if ((T - i * x) % y == 0) {
            possible = true;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
