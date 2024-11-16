#include<bits/stdc++.h>
using namespace std;

int main() 
{

    cout << fixed << setprecision(2);

    int X, P;
    cin >> X >> P;

    double originalPrice = P / (1 - (X / 100.0));
    cout << originalPrice << endl;

    return 0;
}
