//Takes n numbers into an array and searches for a number

#include <stdio.h>
int main()
{
    int i;
    int n;
    int num;
    int found=0;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Element found at index %d.", i);

    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
//if break wasn't there the logic will not work
