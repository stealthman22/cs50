#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int population_start;
    int population_end;
    int count = 0;
    do
    {
      population_start =  get_int("Start Size: ");
    }
    while(population_start < 9);

    // TODO: Prompt for end size

    do
    {
      population_end =  get_int("End Size: ");
    }
    while(population_end < population_start );

    // TODO: Calculate number of years until we reach threshold
    for (int i = 0; i < population_end; i++ )
    {
      // the calculation
    if (population_start != population_end || population_start > population_end)
    {
       population_start =  population_start  +  (population_start / 3) -   (population_start / 4);
        // update the count variable
       count += 1;
    }
    }
     // TODO: Print number of years
      printf("Years: %i", count);
}
