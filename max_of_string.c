#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char max='A';
    int i;
    fgets(s,100,stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=max)
           max=s[i];
    }
    printf("%c",max);
    return 0;
}