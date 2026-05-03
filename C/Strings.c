#include <stdio.h>
int main()
{
    //char name[9] = {'m','r','i','t','h','i','k','a','\0'};
    char name[20];
    int i;
    printf("Enter the string: ");
    scanf("%s", name);
    //printf("The string is: %s", name);
    for(i=0;name[i] != '\0';i++)
    {
        printf("%c\n", name[i]);
    }
    return 0;
    //stops at space
}
