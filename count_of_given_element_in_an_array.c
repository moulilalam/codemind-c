#include<stdio.h>
int main()
{
    int arr[200],n,i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<=n;i++)
    {
        if(k==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}