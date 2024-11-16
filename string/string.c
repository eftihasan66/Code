#include<stdio.h>
int main()
{

    //char s[4]={'e','f','t','i'};
    char s[100]={"efti"};//
    int sz=sizeof(s)/sizeof(char);
    printf("%d \n",sz);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c",s[i]);
    // }
    printf("%s\n",s);
    return 0;
}