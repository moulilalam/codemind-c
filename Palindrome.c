#include<stdio.h>
int main()
{
    int n,i,d,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}