#include<stdio.h>
#include<string.h>
int main()
{

    char s[1001],t[1001];
    scanf("%s %s",s,t);
    int sz=strlen(s);
    int sz1=strlen(t);
    printf("%d %d",sz,sz1);
    printf("\n%s %s",s,t);

    return 0;
}