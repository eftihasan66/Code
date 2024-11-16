#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string S;
    getline(cin, S); 

    string toReplace = "EGYPT";
    string replacement = " ";

    size_t pos = 0;
    while ((pos = S.find(toReplace, pos)) != string::npos) 
    {
        S.replace(pos, toReplace.length(), replacement);
        pos += replacement.length();
    }

    cout << S << endl;

    return 0;
}
