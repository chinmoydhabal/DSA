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

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("After sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}