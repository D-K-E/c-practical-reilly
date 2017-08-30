/*
  ------- Program to calculate perimeter of a rectangle ----------

  Author: Kaan Eraslan

  Purpose: Write a program that prints the perimeter of a rectangle given its height and width. perimeter = 2 · (width + height)

  Usage: Run the program, enter height and width, it prints the result.
 */

/* Library Declarations */

#include <stdio.h>

/* End of Library Declarations */

/* Variable Declarations */

int width; /* width of the rectangle */
int height; /* height of the rectangle */
int perimeter; /* perimeter of the rectangle */
char width_line[100]; /* input line for width from the console */
char height_line[100]; /* input line for height from the console */

/* End of Variable Declarations */

int main()
{
  printf("Enter width: ");
  fgets(width_line, sizeof(width_line), stdin);
  sscanf(width_line, "%d", &width);
  /* --------- Height ----------------- */
  printf("Enter height: ");
  fgets(height_line, sizeof(height_line), stdin);
  sscanf(height_line, "%d", &height);
  /* -------- Operations ------------- */
  perimeter = 2 * (width + height);
  /* -------- Result --------------- */
  printf("Rectangle Perimeter: %d\n", perimeter);
  return(0);
}
