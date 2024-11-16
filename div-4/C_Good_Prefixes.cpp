#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        
        int good_prefixes = 0;

        for (int i = 0; i < n; ++i) 
        {
            long long prefix_sum = 0;
            for (int j = 0; j <= i; ++j) 
            {
                prefix_sum += a[j];
            }
            for (int j = 0; j <= i; ++j) 
            {
                if (a[j] * 2 == prefix_sum) 
                {
                    good_prefixes++;
                    break;
                }
            }
        }
        
        cout << good_prefixes << endl;
    }

    return 0;
}
