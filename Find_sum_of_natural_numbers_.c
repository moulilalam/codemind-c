#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=n*(n+1)/2;
    if(n!=0)
    {
        printf("%d",sum);
    }
    return 0;
}