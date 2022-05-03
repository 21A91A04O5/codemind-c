#include<stdio.h>
int main()
{
    int x[100],n,i,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            if(i%2!=0)
            {
               flag=0;
               break;
            }   
            else
               flag=1;
        }
    }
    if(flag==0)
        printf("False");
    else
        printf("True");
    return 0;    
}