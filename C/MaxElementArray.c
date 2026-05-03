#include <stdio.h>
int main()
{
    int i;
    int arr[5];

    printf("Enter the array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0]; //if int max=0 it will fail for all -ve numbers

    for(i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("The maximum element of the array is %d.\n", max);
    printf("The minimum element of the array is %d.", min);
    return 0;
}
