#include <stdio.h>
int main()
{
    char name[] = "mriiirm";
    int i;
    int count = 0;
    char x;
    int c = 0;

    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
/*
    for(i=0;i<count/2;i++)
    {
        if(name[i] == name[count-i-1])
        {
            c++;
        }
        else
        {
            break;
        }

    }
    if(c == count/2)
    {
        printf("Is a palindrome.");
    }
    else
    {
        printf("Not a palindrome.");
    }

    return 0;

*/

    int palindrome = 1;
    for(i=0;i<count/2;i++)
    {
        if(name[i] != name[count-i-1])
        {
            palindrome = 0;
            break;
        }
    }
    if(palindrome)
    {
        printf("Is a palindrome.");
    }
    else
    {
        printf("Is not a palindrome.");
    }
    return 0;
}
