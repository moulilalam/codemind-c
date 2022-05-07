#include<stdio.h>
int main()
{
    int arr[100],n,i,k,c=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%k!=0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}