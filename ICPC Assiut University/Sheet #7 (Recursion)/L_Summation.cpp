#include <bits/stdc++.h>
using namespace std;

long long int sum(int arr[], int n, int i) 
{
    if (i == n) return 0;
    return arr[i] + sum(arr, n, i + 1); 
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    long long int s = sum(arr, n, 0);
    cout << s;
    return 0;
}
