#include<bits/stdc++.h>
using namespace std;

int minCostToPalindrome(string str, int K) 
{
    int cost = 0;
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) 
    {
        int diff = abs(str[i] - str[len - 1 - i]);
        cost += diff;
    }
    return cost <= K ? cost : -1;
}

int main()

 {
    int Q;
    cin >> Q;

    while (Q--) 
    {
        string str;
        int K;
        cin >> str >> K;

        int min_cost = minCostToPalindrome(str, K);
        if (min_cost != -1) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
