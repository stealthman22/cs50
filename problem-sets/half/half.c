// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>


float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

   printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}


float half(float bill, float tax, int tip)
{
    // Handle tax
    float percentage = 100.0;
    tax = tax / percentage * bill;
    // printf("The new tax %f\n",  tax);
   bill = tax + bill;
    double converted_tip = (double)tip;
    // printf("Final tip value %f\n", converted_tip);
    converted_tip = (converted_tip / percentage) * bill;
    // printf("Final tip value %f\n", converted_tip);
    bill = (converted_tip + bill) /2 ;
  // printf("%f\n", bill);
  return bill;
}


// This took me so long to solve, and here is my theory (TNP)
// there is implicit typecasting, as well as explicit typecasting. Initially I was trying to cast the tip explicitly to a float or double, because it has been
// initialized as an integer.  But still placing that value inside of the tip variable. Even though the value was being overwritten as I wanted, the type did not change.
// Hence any calculation I was performing, was still contained in a variable whose type is integer. So whatever rules apply to integers applied to variable tax.
// One of those rules are; whenever operations are carried out on an integer, and the answer supposedly has a decimal place, the integer would truncate all the decimal places.
//  But by creating a new variable as a double  (converted_tip), to hold that same value, in the final outcome, it's decimal places were preserved
//  suprisinly whenever i tried to print out the value of tip, the compiler tried to hint to me that the possible answer was of type double. All I had to do was contain it inside
//  a new variable that was a double.