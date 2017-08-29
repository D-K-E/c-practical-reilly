/*
********* Rectangle Perimeter - Area ***************

Author: Kaan Eraslan

Purpose: Write a progra m to compute the area and perimeter of a rectangle
with a width of three inches and a height of five inches. What changes must be made
to the program so that it works for a rectangle with a width of 6.8 inches and a
length of 2.3 inches?

Usage: Run the program

 */
#include <stdio.h>
/* Variable declarations */

int width; /* width of the rectangle, unit: inches */
int height; /* height of the rectangle, unit: inches */
int perimeter; /* perimeter of the rectangle, unit: inches */
int area; /* area of the rectangle, unit: inches */

int main()
{
  /* operations */
  width = 3;
  height = 5;
  perimeter = (width * 2) + (height * 2);
  area = width * height;
  /* Print Result of the Operations */
  printf("Perimeter of the rectangle: %d \n", perimeter);
  printf("Area of the rectangle: %d \n", area);
  return(0);
}
