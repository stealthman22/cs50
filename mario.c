#include <cs50.h>
#include <stdio.h>




int main(void)
{
 // printf("????\n");
 // for (int i =0; i < 4; i++)
 // {
 //  printf("?");
 // }
 // printf("\n");

 //  for (int i =0; i < 3; i++)
 // {
 //  printf("#\n");
 // }

// 3 rows of bricks at the same time

// initializing in C:

// constants in c  ensures that the value 
 // of a variable cannot be overridden.
// const int n = 3;
 // for (int i = 0; i < n; i++)
 // {
 //  for (int j = 0; j < n; j++)
 //  {
 //   printf("#");
 //  }
 //  printf("\n");
 // }
 
// Set the count in a loop based on user input.

// Get size of grid.
 int n;
// The do-while loop
do 
{
 n = get_int("Size:  ");
}
while (n < 1);

// Print grid of bricks
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   printf("#");
  }
  printf("\n");
 }
}







// #####################################################################

// const in C makes sure you cannot override set value anywhere. 
// Loop let's us keep doing something, as long as the conditional remains true

// The do while loop, helps us not to write loads of repetitive code
// In this loop, you have to first initialize an empty variable at the top.
// And then programatically fill in a value, and use it in the while part of the loop