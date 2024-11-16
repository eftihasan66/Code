#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double R;

    cin >> R;

    const double PI = 3.141592653;
    
    double area = PI * R * R;
    
    cout << fixed << setprecision(9) << area << endl;
    
    return 0;
}
