#include <stdio.h>
int main()
{
    int arr[100];
    int choice;
    printf("Enter the number of elements");
    scanf("%d", &choice);
    for (int i = 0; i < choice; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l=0;
    int y=choice-1;

    mergesort(arr, l, y);
    printf("sorted");
    for (int i = 0; i < choice; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
void mergesort(int a[100], int l, int y)
{
    int mid;
    if (l < y)
    {
        mid = (l + y) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, y);
        merge(a,l,mid+1,y);
    }
}

void merge(int a[100], int l, int mid, int y)
{
    int b[100];
    int i = l;
    int j = mid;
    int k = l;
    
    while (i <= mid && j <= y)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

     while (i <mid)
        {
            b[k] = a[i];
            k++;
            i++;
        }
        while (j <= y)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    
    
       
    
    for (k=l;k<=y;k++)
    {
        a[k] = b[k];
    }
}

