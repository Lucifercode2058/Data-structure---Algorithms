#include<stdio.h>
int main(){
int choice,result;
int a=0;
int b=1;
printf("ENter choice");
scanf("%d",&choice);
for (int i = 1; i <=choice; i++)
{
    printf("%d\n",a);
    result=a+b;
    a=b;
    b=result;
}
return 0;

}
