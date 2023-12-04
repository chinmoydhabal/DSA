#include <stdio.h>
int a[50];
int SIZE;
int i;
int num;
int main()
{
    printf("Enter the size of the array: ");
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
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        for (i = SIZE; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = num;
        SIZE++;
        printf("Elements in array are:\n");
        for (i = 0; i < SIZE; i++)
        {
            printf("%d ", a[i]);
        }
    }
}