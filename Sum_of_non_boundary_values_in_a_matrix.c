#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s);
    
}