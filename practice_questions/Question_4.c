#include <stdio.h>

int main(void)
{
    int len, wid;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &len);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &wid);

    printf("Area of the rectangle is, %d\n", len*wid);
}