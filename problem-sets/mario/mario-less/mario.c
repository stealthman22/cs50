#include <cs50.h>
#include <stdio.h>

int get_floors(void);
void print_floors(int pyramid);

int main(void)
{
int n = get_floors();

print_floors(n);
}


// Getting user input

int get_floors(void)
{
int floors;

do
{
  floors = get_int("How many floors should your pyramid have: ");
}
while(floors < 1 );

 return floors;
}

// Handling user input
void print_floors(int pyramid)
{
  int column;
  for (int i = 1; i <= pyramid; i++ )
  {

// Got to understand how this loop works
    for (column = 0; column < i; column++)
    {
      printf("#");
    }
    printf("\n");
  }

}

// Got the logic of this loop from stackoverflow.
//  Seems we can loop over a variable created outside of a loop. That's wild tho.

//  Here we create a first loop, that will loop over what ever the user inputs as his choice of floors, (and also that loop will print a new line to the terminal)
// Also, for every
