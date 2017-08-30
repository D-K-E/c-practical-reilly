/*
  --------- Program for Converting Km to Miles ----------

 Author: Kaan Eraslan

 Purpose: Write a program that converts kilometers per hour to miles per h our. miles = (kilometer · 0.6213712

Usage: Run the program. Enter number of km, print out the result
*/

/* Library Declarations */

#include <stdio.h>

/* End of Library Declarations */

/* Variable Declarations */

float km; /* Number of kilometers */
float miles; /* Number of miles */
char line[100]; /* Input line from console */

/* End of Variable Declarations */

int main()
{
  printf("Enter km value: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &km);
  /* Operations */
  miles = km * 0.6213712;
  /* printout the result */
  printf("Result in miles: %f\n", miles);
  return(0);
}
