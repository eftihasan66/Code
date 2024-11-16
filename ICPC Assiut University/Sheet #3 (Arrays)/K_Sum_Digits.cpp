#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    long long int sum = 0;
    for (int i = 0; i < N; ++i) 
    {
        char digit;
        cin >> digit;
        sum += digit - '0'; 
    }

    cout << sum << endl;

    return 0;
}
