#include<stdio.h>
#include<string.h>
int main()
{

    char name[100]={"Efti"};
    int len=0,i=0;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }

    printf("%d",len);
    return 0;
}