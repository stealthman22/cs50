
#include <cs50.h>
#include <stdio.h>

int print_pyramid(int floors);

int main(void)
{
    int pyramid;

    do
     {
      pyramid = get_int("How many floors should your pyramid have: ");
    }
    while( pyramid < 1);

    print_pyramid(pyramid);
}

int print_pyramid(floors)
{
 string h = "#";
for (int i = 0; i < floors; i++)
{
 for (int j = 0; j < floors; j++)
 {
  printf("#");
 }
 printf("\n");
}
return floors;
}

// 35