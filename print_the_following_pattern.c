#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=n;j++){
            if(i==j)
            printf("0");
            else 
            printf("x");
            
        }
        printf("
");
    }
    return 0;
}