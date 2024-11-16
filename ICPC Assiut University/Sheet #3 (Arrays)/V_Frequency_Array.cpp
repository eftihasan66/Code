#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    vector<int>cnt(m + 1, 0); // Initialize count vector with size m+1 and all values set to 0
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= 1 && arr[i] <= m) 
        {
            cnt[arr[i]]++;
        }
    }

    for (int i = 1; i <= m; i++) 
    {
        cout << cnt[i] << endl;
    }

    return 0;
}
