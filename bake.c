#include <stdio.h>   /* gives printf for printing text */
#include <stdlib.h>  /* gives atoi to turn text into a number */

#define MINIMUM_BAKE_TEMPERATURE 170  /* lowest allowed Bake temperature in F */
#define MAXIMUM_BAKE_TEMPERATURE 550  /* highest allowed Bake temperature in F */

int main(int argument_count, char *argument_values[])  /* program starts here and receives command-line inputs */
{
    if (argument_count != 2)  /* exactly one input (the temperature) is required */
    {
        printf("ERROR: usage bake <temperature>\n");  /* tell the user how to run it */
        return 2;  /* exit code 2 means wrong usage */
    }
    int requested_temperature = atoi(argument_values[1]);  /* convert the input text to a number */
    if (requested_temperature < MINIMUM_BAKE_TEMPERATURE || requested_temperature > MAXIMUM_BAKE_TEMPERATURE)  /* check the allowed range */
    {
        printf("ERROR: temperature %d out of range\n", requested_temperature);  /* report the rejected temperature */
        return 1;  /* exit code 1 means rejected */
    }
    printf("STATE=BAKE TEMPERATURE=%d\n", requested_temperature);  /* report the oven is baking at this temperature */
    return 0;  /* exit code 0 means success */
}
