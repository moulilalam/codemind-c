#include<stdio.h>
#include<math.h>
int main()
{
    int sum1=0,sum2=0,n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    k=abs(sum1-sum2);
    printf("%d",k);
    
}