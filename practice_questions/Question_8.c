#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 75)
    {
        printf("Distinction\n");
    } else if (marks >= 50)
    {
        printf("Pass\n");
    } else
    {
        printf("Fail\n");
    }
}