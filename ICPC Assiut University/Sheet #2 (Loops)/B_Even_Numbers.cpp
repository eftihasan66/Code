#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0; cin>>x;
    for (int i = 1; i <=x; i++)
    {
       if(i%2==0)
       {
        cout <<i <<endl;
        count=1;
       }
    }
    if(count==0) cout<<"-1";
    
}