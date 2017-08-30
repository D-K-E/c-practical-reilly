/*
  ------- Program to convert Centigrad to Fahrenheit ---------

  Author: Kaan Eraslan
  
  Purpose: Write a program t hat converts Centigrade to Fahrenheit

  Usage: Run the program, enter the Centigrade value and obtain the Fahrenheit value.

 */

/* Library Declarations */

#include <stdio.h>
#include <string.h>

/* End of Library Declarations */

/* Variable Declarations */

float celsius; /* celsius number, that is converted number */
float fahrenheit; /* fahrenheit number, that is resulting number */
char line[100]; /* input line from the console */

/* End of Variable Declarations */

int main()
{
  /*
    Enter User Input
 */
  printf("Enter celsius value without degree sign: ");
  /*
    Read User Input
  */
  fgets(line, sizeof(line), stdin);
  /*
    Scan User Input
  */
  sscanf(line, "%f", &celsius);
  /*
    Operations
  */
  fahrenheit = (celsius * 9) / 5 + 32;
    /*
      Print Output
    */
    printf("Result in Fahrenheit: %f\n", fahrenheit);
    return(0);
}
