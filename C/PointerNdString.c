#include <stdio.h>
int main()
{
    char *p = "hello";
    //p points to first character h ie stores address of h
/*    printf("%c\n", *(p+0));
    printf("%c\n", *(p+1));
    printf("%c\n", *(p+2));
    printf("%c\n", *(p+3));
    printf("%c\n", *(p+4));
    printf("%c\n", *(p+5));
*/

    while(*p!='\0')
    {
        printf("%c\n", *p);
        p++;
    }
    return 0;
}
