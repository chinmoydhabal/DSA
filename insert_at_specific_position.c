#include <stdio.h>
int a[50];
int SIZE;
int i;
int num;
int pos;
int main()
{
    printf("Enter the size of array: ");
    scanf("%d", &SIZE);
    if (SIZE > 50)
    {
        printf("invalid SIZE!");
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
        printf("Enter the inserting position: ");
        scanf("%d", &pos);
        if (pos <= 0 || pos > SIZE)
        {
            printf("invalid position!");
        }
        else
        {
            for (i = SIZE; i >= pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            SIZE++;
            printf("Elements in array are:\n");
            for (i = 0; i < SIZE; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }
}