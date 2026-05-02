#include <stdio.h>

//return value
//no arguments
int square()
{
    int n;
    scanf("%d", &n);
    return n*n;
}

int main()
{
    printf("Enter the integer to find the square: ");
    int s;
    s = square();
    printf("Square is %d. ",s );
    return 0;
}
