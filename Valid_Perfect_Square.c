#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c,k=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<n;j++)
    {
        c=arr[j];
        k=0;
        for(i=1;i<c;i++)
        {
            if(c==i*i)
            {
                printf("True
");
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("False
");
        }
    }
    
}