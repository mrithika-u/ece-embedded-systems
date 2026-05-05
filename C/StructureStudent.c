#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[15];
    float marks;
};

int main()
{
    struct student s1;
    struct student s2;
    struct student s3;
    s1.roll = 1;
    s2.roll = 2;
    s3.roll = 3;
 /*   s1.name[15] = "Linda";
    s2.name[15] = "Avinash";
    s3.name[15] = "Sanchita";  its outside array also its referring to one specific index*/

    strcpy(s1.name, "Linda");
    strcpy(s2.name, "Avinash");
    strcpy(s3.name, "Sanchita");

    s1.marks = 88.9;
    s2.marks = 95.5;
    s3.marks = 86.5;

    struct student s4;

    printf("Enter details of fourth student: Name Rollno Marks\n");
    scanf("%s %d %f", s4.name, &s4.roll, &s4.marks);


    printf("\nDetails of first student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %f\n\n", s1.name, s1.roll, s1.marks);

    printf("Details of second student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %f\n\n", s2.name, s2.roll, s2.marks);

    printf("Details of third student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %f\n\n", s3.name, s3.roll, s3.marks);

    printf("Details of fourth student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %f\n\n", s4.name, s4.roll, s4.marks);

}
