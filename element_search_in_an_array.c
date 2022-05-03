#include<stdio.h>
int main()
{
    int arr[100],n,i,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            c=c+1;
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