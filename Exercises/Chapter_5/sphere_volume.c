/*
  ----------- Programme to Calculate the Volume of the Sphere ----------

  Author: Kaan Eraslan

  Purpose: Write a program to calculate the volume of a sphere.

  Usage: Run programme. Enter r value and see the result.

  Sphere formula:  V = 4/3πr^3
 */

/*
  Library Declarations
 */
#include <stdio.h>

/*
  End of Library Declarations
*/


/*
  Variable Declarations
*/

float r; /* r value of the sphere */
float r_power3; /* power 3 of r */
float result; /* result of the operations */
const float PI = 3.1415927; /* The classic circle constant */
char line[100]; /* input line from the console */

/*
  End of Variable Declarations
*/
int main()
{
  printf("Enter r value: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &r);
  /* Operations */
  r_power3 = r * r * r;
  result = (4/3) * PI * r_power3;
  printf("Result: %f\n", result);
  return(0);
}
