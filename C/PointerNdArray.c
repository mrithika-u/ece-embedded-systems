#include <stdio.h>
int main()
{
    int arr[] = {1, 9, 55};
    //arr is address of first element
    //arr == &arr[0] basically
    //arr[i] == *(arr+i)
    printf("%d\n", *(arr+0));
    printf("%d\n", *(arr+1));
    printf("%d\n", *(arr+2));
}

//all strings are arrays
//all character arrays that end with '\0' or null character with value 0 in ASCII is a string
