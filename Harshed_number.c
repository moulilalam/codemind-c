#include<stdio.h>
int main()
{
    int n,i,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        sum=sum+d;
        temp=temp/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}