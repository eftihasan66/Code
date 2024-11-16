#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n, k;
    cin >> n >> k;
    
    vector<long long int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<long long int>());
    
   long long int max_sum = 0;
    for (int i = 0; i < k; ++i) 
    {
        max_sum += a[i];
    }
    
    cout << max_sum << endl;
    
    return 0;
}
