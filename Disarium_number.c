#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,sum=0,c=0,i,temp,org;
   
    scanf("%d",&n);
     org=n;
    while(n!=0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    temp=org;
    while(org>0)
    {
        d=org%10;
        d=pow(d,c);
        sum=sum+d;
        c--;
        org=org/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}