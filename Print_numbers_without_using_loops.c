#include<stdio.h>
int main()
{
    int i=1,num;
    scanf("%d",&num);
    if(num>=1&&num<=10000)
    {
        label:   
             printf("%d ",i);
             i++;
             
        if(i<=num)
             goto label;
    }
    else
        printf("The Number Series is Not Possible Print");
    return 0;    
}