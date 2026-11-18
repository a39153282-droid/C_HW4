#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass;
    int i;
    int temp;
    int swapped;

    printf("Original array:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");

    for (pass = 1; pass < SIZE; pass++)
    {
        swapped = 0;

        for (i = 0; i < SIZE - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}