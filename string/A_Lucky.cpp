#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        string ticket;
        cin >> ticket; 

        int sum_first_three = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');

        int sum_last_three = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        if (sum_first_three == sum_last_three) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
