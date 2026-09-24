#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("\nSum of the numbers %d and %d is equal to, %d.\n", num1, num2, num1+num2);
}