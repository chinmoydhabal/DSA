#include <stdio.h>
int main()
{
    int a[50], n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("After sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}