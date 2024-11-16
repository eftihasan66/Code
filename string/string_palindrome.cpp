#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    int val,pos; cin>>val >>pos;

    insert(v.begin()+pos,val);
    for(int x : v) cout <<x <<" ";

    return 0;
}