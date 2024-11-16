#include<bits/stdc++.h>
using namespace std;
void f(int n)
{
    if(n==0) return;
    int x=n%10;
    f(n/10);
    cout <<x <<" ";
}
int main()
{

    int test; cin >>test;
    while(test--)
    {
        int n; cin>>n;
        f(n);
        if(n==0) cout <<"0";
        cout <<endl;
    }
    return 0;
}