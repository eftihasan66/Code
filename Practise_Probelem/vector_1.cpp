#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n ; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int>v2;
    
    for (int i = 0; i < n; i++)
   {
     int sum = 0;
    for (int j = i+1; j< n; j++)
    {
        sum+=v[j];
    }
    v2.push_back(sum);
   }
     
    for(int x : v2)
    cout <<x <<" ";
    
   return 0;
}
