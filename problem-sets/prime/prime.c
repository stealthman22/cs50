#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    if(number < 2)
    {
        return 0;
    }

    else {
        // The trick is to cut out any number below n/2 from the loop
        //  this way you only have to check for the modulus of numbers above half the number
        // these numenrs will effectively be in the loop.
        // I'd still need to consolidate this into memory properly.
        int half = number / 2;

        for (int i = 2; i < half; i++)
        {
            if (number % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
