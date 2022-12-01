#include <stdio.h>
int bs(int a[10], int l, int r, int data)
{
    int mid;
    int flag;
    if (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            flag = mid;
        }
        else if (data < a[mid])
        {
            return bs(a, l, mid - 1, data);
        }
        else
        {
            return bs(a, mid + 1, r, data);
        }
    }
    else
    {
        return flag;
    }
}

int main()
{
    int choice;
    int flag;
    int arr[100];
    printf("Enter the number of elements");
    scanf("%d", &choice);
    for (int i = 0; i < choice; i++)
    {
        scanf("%d", &arr[i]);
    }
    flag = bs(arr, 0,choice - 1, 33);
    if (flag==0)
    {
       printf("NOT FOUND");
    }
    else
    printf("Sucessful and it is at %d",flag);
    
    
    return 0;
}