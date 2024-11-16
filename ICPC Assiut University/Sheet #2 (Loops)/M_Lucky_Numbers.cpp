#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++) 
    {
        int number = i;
        bool isLucky = true;
        while (number > 0) 
        {
            int digit = number % 10;
            if (digit != 4 && digit != 7) 
            {
                isLucky = false;
                break;
            }
            number /= 10;
        }
        if (isLucky) 
        {
            cout << i << " ";
            cnt++;
        }
    }
    if (cnt == 0)
     {
        cout << "-1";
    }

    return 0;
}
