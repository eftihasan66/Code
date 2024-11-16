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
    int max =INT_MIN ;
    for (int j = i+1; j<= n; j++)
    {
       if(v[j]>max)
       {
        max = v[j];
       }
    }
    v2.push_back(max);
   }
     
    for(int x : v2)
    cout <<x <<" ";
    
   return 0;
}
