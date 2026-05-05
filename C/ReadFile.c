#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("studentData.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    if(fp == NULL)
    {
        printf("File not found");
    }

    fclose(fp);
    return 0;
}

//fgetc is for read character
//fopen is to open file
//fprintf is to write
//fscanf is to read
//fclose is to close file
