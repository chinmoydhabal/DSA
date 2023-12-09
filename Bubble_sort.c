#include <stdio.h>
int main()
{
    int a[100],n,i,j,flag,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the element of the array:\n",n);
    for (i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }

    printf("After sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
