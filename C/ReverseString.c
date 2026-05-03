#include <stdio.h>
int main()
{
    char name[] = "mrithika";
    int i;
    int count = 0;
    char x;

    for(i=0;name[i] != '\0';i++)
    {
        count++;
    }

    for(i=0;i<count/2;i++)
    {
        x = name[i];
        name[i] = name[count-i-1];
        name[count-i-1] = x;
    }
    printf("%s", name);
    return 0;
}
