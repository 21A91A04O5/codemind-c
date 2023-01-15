#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0,d=0;
    char s[100];
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
        {
            c++;
            if(d!=0)
            {
                printf("C");
                d=0;
            }
        }
        else
        {
            if(c!=0)
            { 
                printf("V");
                c=0;
            }
            d++;
        }
    }
    if(c!=0)
      printf("V");
    if(d!=0)
      printf("C");
    return 0;
}