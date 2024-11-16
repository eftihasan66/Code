#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >>arr[i][j];
        }
    }
    int sum_of_pDia=0,sum_of_sDia=0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum_of_pDia+=arr[i][j];
            }
             if(i+j==n-1)
            {
                sum_of_sDia+=arr[i][j];
            }
        }
    }

    int final_sum=abs( sum_of_sDia - sum_of_pDia);
    cout <<final_sum;
    return 0;
}