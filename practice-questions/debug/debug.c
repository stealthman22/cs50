// // Become familiar wih C syntax
// // Learn to debug buggy code

// #include <cs50.h>

// int main(void)
// {
//     // Ask for your name and where live
//     name = get_string("What is your name? ")
//     location = get_string("Where do you live? ")

//     // Say hello
//     print("Hello, %i, from %i!", name, location)
// }

// ######### ANSWER

// Become familiar wih C syntax
// Learn to debug buggy code
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for your name and where live
  string name = get_string("What is your name?\n ");
    string location = get_string("Where do you live?\n ");

    // Say hello
    printf("Hello, %s, from %s!", name, location);
}
