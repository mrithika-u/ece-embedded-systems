#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int m;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap array elements not indices
                m=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=m;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
