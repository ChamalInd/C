#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(void);

int main(void)
{
    int number = generate_random_number();
    int guess;

    while (number != guess)
    {
        printf("Guess a number between 1 and 10: ");
        scanf("%i", &guess);

        if (number > guess)
            printf("Too low.\n");
        else if (number < guess)
            printf("Too high.\n");
        else
            printf("Found it!!!\n");
    }

}

int generate_random_number(void)
{
    srand(time(NULL));

    int min = 1;
    int max = 10;

    // generating a random number between 1 and 10
    int random = (rand() % (max - min + 1)) + min;

    return random;
}