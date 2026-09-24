#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i=1; i<11; i++)
    {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to 10 is, %d\n", sum);
}