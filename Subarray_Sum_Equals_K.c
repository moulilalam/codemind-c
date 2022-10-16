#include<stdio.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int c=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==t) {
                c++;
            }
        }
    }
    printf("%d",c);
}