#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,r,count=0,sum=0;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=num;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
        count--;
    }
    if(num==sum)
        printf("True");
    else
        printf("False");
    return 0;    
}