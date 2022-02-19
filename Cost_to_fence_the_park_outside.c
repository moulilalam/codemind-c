#include<stdio.h>
int main()
{
    int L,B,X,Y,A1,A2,W,C;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A1=L*B;
    A2=(L+2*W)*(B+2*W);
    X=A2-A1;
    Y=C*X;
    printf("%d",Y);
    return 0;
}

