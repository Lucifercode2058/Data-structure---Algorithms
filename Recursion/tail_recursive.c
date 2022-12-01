#include<stdio.h>


void rec(int value){
if (value==0)
return;
else{
    printf("%d\n",value);
    return rec(value-1);
}

}
int main(){
    rec(100);
    return 0;
}