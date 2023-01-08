#include <cs50.h>
#include <stdio.h>

int main(void)
{
 char c = get_char("Do you agree? ");

// single quotes are for characters
// The logical or operator || works in c
if (c == 'y' || c == 'Y')
 {
  // double quotes are for strings
  printf("Agreed.\n");
 }

 else if (c == 'n' || c == 'N')
{
 printf("Not agreed.\n");
}
}




