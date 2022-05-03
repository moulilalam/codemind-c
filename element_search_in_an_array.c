#include<stdio.h>
int main()
{
    int arr[100],i,n,N,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        if(arr[i]==N)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}