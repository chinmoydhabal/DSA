#include <stdio.h>
int a[5];
int SIZE;
int i;
int *q = a;
int main()
{
    printf("Enter the size of array: ");
    scanf("%d", &SIZE);
    if (SIZE > 5)
    {
        printf("Invalid SIZE!");
    }
    else
    {
        printf("Enter the elements of array:\n");

        // *******************************************************************

        for (i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Elements in array are: ");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", a[i]);
        }
    }
}