#include<stdio.h>
int fac(n){
    if(n==1)
    return 1;
    else return n*fac(n-1);
}
int main(){
    int n,f;
    printf("Enter number for fac");
    scanf("%d",&n);
    f=fac(n);
    printf("%d",f);
    return 0;
}