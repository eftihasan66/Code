#include <iostream>
#include <climits> // for INT_MAX
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
    
    int min = INT_MAX; 
    int pos = -1; 

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
            pos = i;
        }
    }
    
    cout << min << " " << pos + 1;
    
    return 0;
}
