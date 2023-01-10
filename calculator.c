#include <cs50.h>
#include <stdio.h>

int main(void)
{
 long x = get_long("x: ");
 long y = get_long("y: ");

// Typecasting
// Changed from float to doubles.
 double z = (double) x / (double)y;
printf("%.20f\n", z);
}


// %i prints out an integer, %li prints out a long value.

// In the computer Ram, there is only a finite amount of memory, and  integers are represented by  only 32 bits. Hence it can only represent between 0 (when all bits are false). And the highest possible value it can represent (when all bits are true ), is
 // 4294967295.

 // Hence for every integer, the highest possible value in a calculation (like a sum of two variables, would be at most roughly 2 billion: 2147483647). And the rest is this same digit, but in the negative space.
  // if we try to go higher that this limit for an integer, we would cause a problem called "integer overflow".

 // The way around this is a data type called Long in c (Bigint in js), this one can be represented with 64 bit.
  // A long can count up as high as 9 quintillion.

//  Truncation: mistakenly loose all figures after the decimal value. this is because integers and longs do not have support for decimal values.

// Type casting: converting a data type to another, by specifically telling the compiler that you want to do so.
 // We can use this to solve the truncaion problem of float outputs.

 // Floating-point imprecision: the boundaries of a floating point number
 // %.20f show me 20 points after the decimal point
  // To solve this, we use a double, which uses twice as many the bits of a float (64bits).

  // By 19th January 2038 we will run into a time problems with computers, because most of them will have run out of bits to keep track of time after that date. this is because they are using 32 bits to represent time. Which will bring us back to Dec 13 1901.