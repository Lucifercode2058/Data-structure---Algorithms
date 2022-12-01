#include <stdio.h>
int main()
{
    int num, temp, i,j;
    printf("Enter the size of array\n");
    scanf("%d", &num);
    int a[num];

    printf("Enter the elements");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 1; i < num; i++)
    {
       temp=a[i];
j=i-1;
while (j>=0 && a[j]>temp)///notice
{
   a[j+1]=a[j];
   j--;
}

a[j+1]=temp;

    }
    for ( i = 0; i <num; i++)
    {
        printf(" sorted are:%d\n",a[i]);
    }
    

    return 0;
    
}