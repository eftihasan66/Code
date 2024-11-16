#include <iostream>

using namespace std;

void printEvenIndicesReversed(int arr[], int index) 
{
    if (index < 0) return;
    
    if (index % 2 == 0) 
    {
        cout << arr[index] << " ";
    }
    printEvenIndicesReversed(arr, index - 1);
}

int main() 
{
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }
    printEvenIndicesReversed(arr, N - 1);
    
    return 0;
}
