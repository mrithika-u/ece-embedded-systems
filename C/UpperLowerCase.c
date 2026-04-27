#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf(" %c", &c);
    if(c >='A' && c <= 'Z')
        printf("Uppercase");
    else if(c >='a' && c <= 'z')
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}
