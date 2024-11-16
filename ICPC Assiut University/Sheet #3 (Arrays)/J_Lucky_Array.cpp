#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }

    int minElement = INT_MAX;
    int minCount = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
            minCount = 1;
        } 
        else if (arr[i] == minElement) 
        {
            minCount++;
        }
    }

    // Check if the frequency of the minimum element is odd or even
    if (minCount % 2 == 0) {
        cout << "Unlucky";
    } else {
        cout << "Lucky";
    }

    return 0;
}
