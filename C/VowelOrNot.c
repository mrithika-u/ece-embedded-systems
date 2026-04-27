//"a" is a string, 'a' is a char
#include <stdio.h>
int main()
{
    char a;
    printf("Enter the alphabet: ");
    scanf("%c", &a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("%c is a vowel", a);
    else
        printf("%c is not a vowel", a);
    return 0;
}

