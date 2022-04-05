#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d",&n);
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
    return 0;
}

