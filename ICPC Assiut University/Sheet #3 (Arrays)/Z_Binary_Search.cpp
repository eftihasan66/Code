#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q; cin>>n>>q;
    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    sort(arr,arr+n);
    while(q--)
    {
        int x; cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        
        //binary search
     while(l<=r)
    {
        int mid_index=(l+r)/2;
        if(arr[mid_index]==x)
        {
            flag= true;
            break;
        }
        if(x>arr[mid_index])
        {
            l = mid_index+1;
        }
        else
        {
            r = mid_index - 1;
        }
    }
     if(flag==true)  cout <<"found" <<endl;
    else cout <<"not found" <<endl;
    }

   
    return 0;
}