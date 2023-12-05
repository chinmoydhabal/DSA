#include <stdio.h>
int a[2][3];
int i, j;
int main()
{
    printf("Enter the elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("printing elements are: ");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}