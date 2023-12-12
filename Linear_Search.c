#include<stdio.h>
int i;
int a[50];
int SIZE;
int data;
int found=0;
int main()
{
    printf("Enetre the size of the array: ");
    scanf("%d",& SIZE);
    printf("Enter the element of array:\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want found: ");
    scanf("%d",&data);
    for(i=0;i<SIZE;i++)
    {
        if(a[i]==data)
        {
            printf("The element found at the index:%d ",i);
            found=1;
            break;

        }
    }
    if(found==0)
    {
        printf("Data not found!");
    }
}