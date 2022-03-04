#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,sum=0;
    float result,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        product=product*d;
        n=n/10;
    }
    result=(product-sum);
    printf("%.f",result);
    return 0;
}