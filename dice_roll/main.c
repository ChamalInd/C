#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes
int generate_random_number(void);

int main(void)
{
    // to seed the random number generator
    srand(time(NULL));

    int dices;

    printf("-----Dice Roll-----\n\n");
    printf("Enter the no. of dices: ");
    scanf("%i", &dices);

    // printing results
    for (int i = 0; i < dices; i++)
    {
        int number = generate_random_number();
        printf("Dice %i = %i\n", i + 1, number);
    }

    
}

int generate_random_number(void)
{
    int min = 1;
    int max = 6;

    // generating the random number
    int random = (rand() % (max - min + 1)) + min;

    return random;
}