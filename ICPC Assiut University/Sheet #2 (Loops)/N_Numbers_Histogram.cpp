#include <iostream>
using namespace std;

int main() 
{
    char S;
    int N;
    cin >> S>>N;

    int numbers[N];
    for (int i = 0; i < N; ++i) 
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < numbers[i]; ++j) 
        {
            cout << S;
        }
        cout << endl; 
    }
    
    return 0;
}
