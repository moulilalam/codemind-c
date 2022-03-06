#include<stdio.h>
int main()
{
    int n,sum=0,d,m,temp;
    scanf("%d",&n);
    m=n*n;
    temp=m;
    while(m>0)
    {
        d=m%10;
        sum=sum+d;
        m=m/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}