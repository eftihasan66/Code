#include<bits/stdc++.h>
using namespace std;
int main() 
{
  string s; cin>>s;
  string s2=s;
  reverse(s.begin(),s.end());

   for(char c : s)
   {
      cout <<c ;
   }
   return 0;
}
