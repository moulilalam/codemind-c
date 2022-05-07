#include<stdio.h>
int main()
{
    int arr[100],n,i,d,c=0,k,l=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
        c=1;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            c=c+1;
            arr[i]=arr[i]/10;
        }
        if(c==k)
        {
            l=l+1;
        }
        c=0;
    }
    
    printf("%d",l);
    return 0;
}