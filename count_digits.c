#include<stdio.h>
int main()
{
    int arr[100],n,i,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        c=1;
        while(arr[i]!=0)
        {
        d=arr[i]%10;
        c=c+1;
        arr[i]=arr[i]/10;
        }
        printf("%d ",c);
        c=0;
    }
}