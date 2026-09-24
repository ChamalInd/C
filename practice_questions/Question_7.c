#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=1; i<11; i++)
    {
        if (i==10)
        {
            printf("%d x %d = %d\n", i, num, num*i);
        } else 
        {
            printf(" %d x %d = %d\n", i, num, num*i);
        }
    }
}