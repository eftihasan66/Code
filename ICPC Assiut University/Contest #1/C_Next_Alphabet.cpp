#include <iostream>
using namespace std;

int main() 
{
    char C;
    cin >> C;
    char nextChar = C + 1;
    if (nextChar > 'z') 
    {
        nextChar = 'a';
    }

    cout << nextChar << endl;

    return 0;
}
