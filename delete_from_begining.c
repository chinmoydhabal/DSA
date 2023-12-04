#include <stdio.h>
int a[50];
int SIZE;
int i;
int item;
int main()
{
    printf("Enter the size of array: ");
    scanf("%d", &SIZE);
    if (SIZE > 50)
    {
        printf("Invalid SIZE!");
    }
    else
    {
        printf("Enter the elements of array:\n");
        for (i = 0; i < SIZE; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < SIZE - 1; i++)
        {
            a[i] = a[i + 1];
        }
        SIZE--;
        // i=0;
        // printf("The deleted value is: ");
        // {
        //     printf("%d\n",i);
        // }
        printf("Elements in array are:\n");
        for (i = 0; i < SIZE; i++)
        {
            printf("%d ", a[i]);
        }
    }
}