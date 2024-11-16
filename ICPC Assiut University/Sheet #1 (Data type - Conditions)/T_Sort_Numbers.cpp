#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A<B && A<C) cout <<A<<endl;
    else if(B<C && B<A) cout <<B <<endl;
    if(C<A && C<B) cout <<C <<endl;
    cout <<endl <<A <<endl <<B <<endl <<C <<endl;
    return 0;
}
