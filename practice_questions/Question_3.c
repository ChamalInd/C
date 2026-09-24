#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is the largest number.\n", num1);
    } else 
    {
        printf("%d is the largest number.\n", num2);
    }
}