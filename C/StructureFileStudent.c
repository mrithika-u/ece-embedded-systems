#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    char subject[20];
    int marks;
};
int main()
{
    int n;
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];
    printf("\nEnter details of each student: (name subject marks)\n");
    for(i = 0; i <n; i++)
    {
        scanf("%s %s %d", s[i].name, s[i].subject, &s[i].marks);
    }


    FILE *first;
    first = fopen("Student.txt", "a"); // "a" append so that old students data isn't erased

        if(first == NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    for(i = 0; i <n; i++)
    {
        fprintf(first, "%s %s %d\n",s[i].name, s[i].subject, s[i].marks);
    }
    fclose(first);

    return 0;




}
