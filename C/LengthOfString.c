#include <stdio.h>
int main()
{
    int i;
    int count = 0;
    char name[]="mrithika";
    for(i=0; name[i] != '\0';i++)
    {
        count++;
    }
    printf("Length of string %s is %d", name, count);
    return 0;
}
//length of string does not include '\0'
