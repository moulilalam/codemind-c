#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,A,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",A);
    return 0;
}