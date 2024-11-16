#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string input;
    getline(cin, input); 

    int start = 0;

    for (int end = 0; end <= input.size(); ++end) 
    {
        if (end == input.size() || input[end] == ' ') 
        {    
            reverse(input.begin() + start, input.begin() + end);
            start = end + 1;  
        }
    }

    cout << input << endl;

    return 0;
}
