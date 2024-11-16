#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        int id;
        string name;
        char section;
        int tm;
};

int main() 
{
int n;
cin >> n;
 while (n--)
    {
        Student students[3];
            for(int i=0;i<3;i++) 

        {
            cin >>students[i].id >>students[i].name >>students[i].section >>students[i].tm;//tm=total marks
        }
            int highestmarks =0,highestid =3;
            
        for (int i=0;i<3;i++) 
        {
            if (students[i].tm > highestmarks || (students[i].tm == highestmarks && students[i].id < highestid)) 
            {
                highestmarks = students[i].tm;
                highestid = students[i].id;
            }
        }
        for (int i=0;i<3;i++) 
        {
            if (students[i].tm == highestmarks && students[i].id == highestid) 
                {
                     cout << students[i].id << " " << students[i].name << " " << students[i].section << " " << students[i].tm << endl;
                     break;
                }
        }
    }

  return 0;

}