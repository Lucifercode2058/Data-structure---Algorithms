#include <stdio.h>
int main()
{
    int num, temp, i;
    printf("Enter the size of array\n");
    scanf("%d", &num);
    int Sortasc[num];

    printf("Enter the elements");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Sortasc[i]);
    }

    for (i = 0; i < num - 1; i++)//Pass =size of array -1
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (Sortasc[j] > Sortasc[j + 1])
            {
                temp = Sortasc[j];//SWapping;
                Sortasc[j] = Sortasc[j + 1];
                Sortasc[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("Sorted elements are  %d\n", Sortasc[i]);
    }

    return 0;
}