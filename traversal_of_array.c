#include <stdio.h>
int arr[50];
int SIZE;
int i;
int main()
{
    printf("Enter the size of array:\n");
    scanf("%d", &SIZE);
    printf("Enter the ellement of array:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d  ", arr[i]);
    }
}
