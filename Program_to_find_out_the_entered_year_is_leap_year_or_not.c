#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    l=n%4;
    if(l==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
                printf("True");
            else
                printf("False");
        }
        else
            printf("True");
    }
    else
        printf("False");
    return 0;
}