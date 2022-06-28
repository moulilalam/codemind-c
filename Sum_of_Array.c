#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}