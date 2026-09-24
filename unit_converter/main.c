#include <stdio.h>
#include <ctype.h>

// Prototypes
float CelsiusToFahrenheit(float value);

int main(void)
{
    // Declaring variables
    float value;
    char cur_unit, new_unit;

    // Initial setup
    printf("-----Temperature Converter-----\n\n");
    printf("Ex: 72 C | 73 F | 54 K\n\n");

    // Taking user inputs
    printf("Current: ");
    scanf("%f %c", &value, &cur_unit);
    printf("New Unit: ");
    scanf(" %c", &new_unit); // space added to create buffer

    cur_unit = toupper(cur_unit);
    new_unit = toupper(new_unit);
    
    // Conversion
    if (cur_unit == 'C' && new_unit == 'F')
    {
        int new_val = CelsiusToFahrenheit(value);
        printf("New Value: %f %c", new_val, new_unit);
    }

    return 0;
}

float CelsiusToFahrenheit(float value)
{
    float new_val;

    new_val = (float) (value * (9.0 / 5.0)) + 32.0;

    return new_val;
}