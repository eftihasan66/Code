#include <iostream>
using namespace std;

int main() 
{
    char a;
    cin >> a;

    if (a >= '0' && a <= '9') 
    {
        cout << "IS DIGIT" << endl;
    } 
    else 
    {
        cout << "ALPHA" << endl;
        if (a >= 'a' && a <= 'z') 
        {
            cout << "IS SMALL" << endl;
        } 
        else if (a >= 'A' && a <= 'Z') 
        {
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}
