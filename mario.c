#include <cs50.h>
#include <stdio.h>




// int main(void)
// {
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
//  int n;
// // The do-while loop
// do
// {
//  n = get_int("Size:  ");
// }
// while (n < 1);

// // Print grid of bricks
//  for (int i = 0; i < n; i++)
//  {
//   for (int j = 0; j < n; j++)
//   {
//    printf("#");
//   }
//   printf("\n");
//  }
// }

int get_size(void);
void print_grid(int size);


int main(void)
{
 // Get a size of a grid
 int n = get_size();

 // Print grid of bricks
 print_grid(n);
}

// make this function return an integer.
// **This function resembles a Higher order function in Javascript.**
int get_size(void)
{
 int n;
 do
{
 n = get_int("Size: ");
}
while (n < 1);
{
 return n;
}

}

void print_grid(int size)
{
 for (int i = 0; i < size; i++)
 {
  for (int j = 0; j < size; j++)
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
// And then programatically fill in a value, and use it in the while part of the loop.

// You can use comments in code, to start writing your pseudocode.

// Abstractions; By this we mean taking away the bulky logic of a function into
 // another function, leaving the current function more succinct, while the
  // abstraction can be reusable (or plugged in anywehre)

// Pseudocode is terse english that gets your point accross easily at first.
// void means the custom function you are creating does not take any input

// A side effect is when a function displays something visual
// TO write a custom side effect function we first of all declare it's input as void,
 // and then as the first parameter, we write the type of value it should expect, and then
  // the actual parameter.

// Mostly main has to be the first function, so when you write custom functions, to convince  the compiler that you've actually written the custom functions which some function in main will call later on, just copy and paste the first line of the custom function on top of main. Just remember to end those lines with a semicolon, because they are now statments.