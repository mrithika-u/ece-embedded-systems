#include <stdio.h>

void sum(int a, int b) //should be void for no return type
{
    int s;
    s = a + b;
    printf("%d + %d = %d\n", a, b, s);
}

int main()
{
    int n, m;
    printf("Enter the numbers to be added: ");
    scanf("%d %d", &n, &m);
    sum(n, m);
    return 0;
}
