#include<stdio.h>
int main()
{
    int n,l,d,rev,rev1=0,m;
    scanf("%d",&n);
    rev=0;
    int k=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    //printf("%d ",rev);
    l=k*k;
    
    m=rev*rev;
    rev1=0;
    while(m>0)
    {
        d=m%10;
        rev1=rev1*10+d;
        m=m/10;
    }
    //printf("%d",rev1);
    if(l==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}