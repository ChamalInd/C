#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num1, num2;
    float result;
    char oper;

    printf("------Simple Calculator------\n\nSupported Operators: (+ - / *)\nExample: 12 + 13\n\n");

    while (true)
    {
        printf(": ");
        scanf("%i %c %i", &num1, &oper, &num2);

        if (oper == '+')
            result = num1 + num2;
        else if (oper == '-')
            result = num1 - num2;
        else if (oper == '/')
            result = num1 / (float)num2;
        else if (oper == '*')
            result = num1 * num2;
        else
            break;

        printf("= %.2f\n", result);
        oper = '\0';
    }
}
