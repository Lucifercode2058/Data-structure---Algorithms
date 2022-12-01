#include<stdio.h>
int found=0;
int choice;
int data;
int main(){
    int arr[100];
    printf("Enter the number of elements");
    scanf("%d",&choice);
    for (int i = 0; i < choice; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("ENter the data you want to search in list");
    scanf("%d",&data);

    for ( int i = 0; i < choice; i++)
    {
        if (arr[i]==data)
        {
          printf("Data is founded in %d index",i);
          found++;
          break;
        }
        if (found==0)
        {
         printf("Not founded");
        }
        
    }
    return 0;
    
    
}