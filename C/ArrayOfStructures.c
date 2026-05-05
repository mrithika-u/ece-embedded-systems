#include <stdio.h>
#include <string.h>

struct student
{
    char name[15];
    int roll;
    float marks;
};

int main()
{
    struct student s[4];

    strcpy(s[0].name, "Alakshya");
    strcpy(s[1].name, "Ananya");
    strcpy(s[2].name, "Bavesh");

    s[0].roll = 1;
    s[1].roll = 2;
    s[2].roll = 3;

    s[0].marks = 19.9;
    s[1].marks = 13.4;
    s[2].marks = 14.4;

    printf("Enter details of fourth student: Name Rollno Marks\n");
    scanf("%s %d %f", s[3].name, &s[3].roll, &s[3].marks);
// can use loop to enter details of student

    int i;
    for(i = 0; i<4; i++)
    {
    printf("\nDetails of student %d:\n", i+1);
    printf("Name: %s\nRoll No: %d\nMarks: %f\n\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}
