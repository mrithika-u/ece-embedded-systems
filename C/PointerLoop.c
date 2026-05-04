#include <stdio.h>
int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p = arr;   // pointer to first element

    printf("Array elements are: ");

    while(p < arr + n)
    {
        printf("%d ", *p);  // print value
        p++;                // move to next element
    }
    return 0;
}
