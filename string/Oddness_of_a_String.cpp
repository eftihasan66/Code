#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--)
     {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--) 
        {
            int l, r;
            cin >> l >> r;
            int char_count[26] = {0};

            for (int i = l - 1; i < r; i++) 
            {
                char_count[s[i] - 'a']++;
            }

            int oddness = 0;
            for (int i = 0; i < 26; i++) 
            {
                if (char_count[i] % 2 == 1) 
                {
                    oddness++;
                }
            }
            cout << oddness << endl;
        }
    }

    return 0;
}
