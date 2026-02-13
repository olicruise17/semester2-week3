
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Oliver Cruise
 * ID: 201823845
 */

 int main( void ) {

    // define and initialise variables for the problem data 

   float salary = 36250;
   float insurance = 8;
   float tax = 15;

    // calculate the deductions and final take-home salary

    // calculate national insurance and calculate salary left after deduction

    float insurance_ded = salary * (insurance/100);
    float remaining_sal = salary - insurance_ded;

    // calculate taxable income, tax deduction and salary left after deduction

    float taxable_income = remaining_sal - 12500;
    float tax_ded = taxable_income * (tax/100);
    float take_home = remaining_sal - tax_ded;

    // Use only these print statement with appropriate formatting and variable names

    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",insurance_ded);
    printf("Tax contribution £%.2f\n",tax_ded);
    printf("Take home salary £%.2f\n",take_home);

    return 0;
 }