#include <stdio.h>
int main()
{
    int num, temp, i;
    printf("Enter the size of array\n");
    scanf("%d", &num);
    int Sel[num];

    printf("Enter the elements");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Sel[i]);
    }

    for (i = 0; i < num - 1; i++)
    {
        int min = i;
        for (int j = i + 1; i < num; j++)
        {
            if (Sel[j] < Sel[min])

            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = Sel[i];
            Sel[i] = Sel[min];
            Sel[min] = temp;
        }
    }
    for (i = 0; i < num; i++)
    {
        printf(" The sorted list is %d\n", Sel[i]);
    }
    return 0;
}