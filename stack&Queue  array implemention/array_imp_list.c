// at certain position 
#include <stdio.h>
int size, data, pos, i;

int list[50];
int main()
{
    printf("Enter the size of array");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Invalid enter");
    }
    else
    {
        printf("ENter the elements\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &list[i]);
        }
    }
    printf("The entered elemets are:");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", list[i]);
    }
    // at position 3 means index 2 ;
    printf("Enter the data and position to enter in array position from 1-5");
    scanf("%d %d", &data, &pos);
    for (i = size - 1; i >= pos - 1; i--)
    {
        list[i + 1] = list[i];
        
    }
    list[pos-1] = data;
    size++;
    printf("The data at %d is %d", pos, list[pos]);
    printf("The new elemets are:");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", list[i]);
    }
    return 0;
    
}
//At begging same but swap need for i>=0
//and list[0]=data;
//at last no need swappp just list[size]=data;size++