#include <stdio.h>
int partation(int num[10], int l, int r)
{
    int x = l;
    int y = r;
    int pivot = num[l];
    int temp;
    while (x < y)
    {
        while (num[x] <= pivot)
        {
            x++;
        }
        while (num[y] > pivot)
        {
            y--;
        }
        if (x < y)
        {
            temp = num[x];
            num[x] = num[y];
            num[y] = temp;
        }

        num[l] = num[y];
        num[y] = pivot;
        return y;
    }
}

void quicksort(int num[10], int l, int r)
{

    if (l < r)
    {
        int loc;
        loc = partation(num, l, r);

        quicksort(num, l, loc - 1);

        quicksort(num, loc + 1, r);

    }
}

int main()
{

    int choice;
    int arr[100];
    printf("enter the number of elements");
    scanf("%d", &choice);
    for (int i = 0; i < choice; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    quicksort(arr, 0, choice-1);
    printf("After sorted");
    for (int i = 0; i < choice; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
