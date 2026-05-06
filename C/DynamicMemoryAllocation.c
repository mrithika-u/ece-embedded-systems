#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int *p;

    p = (int*) malloc(n * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements:\n");

    for(i = 0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Elements are:\n");

    for(i = 0; i<n; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}

//note p[i] is *(p+i]
