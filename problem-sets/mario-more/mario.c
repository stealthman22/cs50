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
while( floors < 1 || floors > 8 );

 return floors;
}

void print_floors(int pyramid)
{
 int right_column;
 int left_column;
 int spaces;
 for (int i = 1; i <= pyramid; i++)
 {


   for (left_column = 0; left_column < i; left_column++)
  {
   printf("#");
  }

// print spaces in between
  for (int j = 0; j < pyramid; j++)
  {
   printf(" ");
  }
  
   for (right_column = 0; right_column < i; right_column++)
  {
   printf("#" );
  }
  printf("\n");
 }
}