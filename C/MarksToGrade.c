#include <stdio.h>
int main()
{
    float m;
    printf("Enter marks scored: ");
    scanf(" %f", &m);
    if(m<0 || m>100.00)
        printf("Invalid");
    else if(m>=90)
        printf("Grade A");
    else if(m>=80.00)
        printf("Grade B");
    else if(m>=70.00)
        printf("Grade C");
    else if(m>=60.00)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}
