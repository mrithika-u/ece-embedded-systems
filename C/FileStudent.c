#include <stdio.h>
int main()
{
    char name[10];
    int roll;
    float marks;
    printf("Enter the name rollno marks of student: ");
    scanf("%s %d %f", name, &roll, &marks);

    FILE *data;
    data = fopen("studentData.txt", "w");
    fprintf(data,"%s %d %f", name, roll, marks);
    fclose(data);
    return 0;

}
