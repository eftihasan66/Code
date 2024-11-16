#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int heights[n];
    for (int i = 0; i < n; ++i) 
    {
        cin >> heights[i];
    }

    int min_height = heights[0];
    for (int i = 1; i < n; i++) 
    {
        if (heights[i] < min_height) 
        {
            min_height = heights[i];
        }
    }
  int lowest_height = min_height + k;

    cout << lowest_height << endl;

    return 0;
}
