#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m; cin>>n >>m;
    int arr[n][m];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >>arr[i][j];
        }
    }
    int x; cin>>x;
    int cnt=0;

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==x)
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt==0) cout <<"will take number" <<endl;
    else cout <<"will not take number" <<endl;
    return 0;
}