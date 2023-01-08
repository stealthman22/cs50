// This is a header file, it imports the C standard library
#include <cs50.h>
#include <stdio.h>

int main(void)
{
 // declaring data type string
 string answer = get_string("What's your name? ");
 printf("Hello, %s\n", answer);
}

