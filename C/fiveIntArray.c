#include <stdio.h>
int main()
{
    int arr[5]; // 5 elements can be stored
    int i;
    int sum = 0;
    printf("Enter the array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: \n");
    printf("{ ");
    for(i=0; i<4; i++)
        {
            printf("%d, ", arr[i]);
            sum = arr[i]+ sum;
        }
    printf("%d }\n", arr[4]);
    printf("Sum of all array elements is %d", sum + arr[4]);
    return 0;
}

//print all elements of array and calculate sum of all elements
//try other logic to print {1,2,3,4,5} with only one loop and no print outside it
