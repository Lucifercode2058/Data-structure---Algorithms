#include<stdio.h>
int gcd(int a,int b){
    if (b==0)
 return a;
 else{
    return (gcd(b,a%b));
 }
    
}
int main(){
    int x,y,result;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    result=gcd(x,y);
    printf("GCD is%d\n",result);
    return 0;

}