#include <stdio.h>
int a[50];
int SIZE;
int i;
int pos;
int item;
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
        printf("Enter elements in array:\n");
        for (i = 0; i < SIZE; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("From which position you want to delete: ");
        scanf("%d", &pos);
        if (pos <= 0 || pos > SIZE)
        {
            printf("invalid position!");
        }
        else
        {
            item = a[pos - 1];
            printf("The deleted value is:");
            {
                printf("%d\n", item);
            }
            for (i = pos - 1; i < SIZE - 1; i++)
            {
                a[i] = a[i + 1];
            }
            SIZE--;
            printf("Elements in array are:\n");
            for (i = 0; i < SIZE; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }
}