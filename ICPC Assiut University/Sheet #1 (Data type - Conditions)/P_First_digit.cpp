#include <iostream>
using namespace std;

int main() 
{
    int x;
    cin >> x;
    int ans = x / 1000;
    if (ans % 2 == 0) 
    {
        cout << "EVEN" << endl;
    } 
    else 
    {
        cout << "ODD" << endl;
    }
    return 0;
}
