/*
  ----- Convert Minutes to Hour - Minutes -------------

  Author: Kaan Eraslan
  Purpose: Write a program that takes hours and minutes as input, and then outputs the total number of minutes.
  Usage: Run the program. Enter the hour and minute. Print out the result
*/

/* Library Declarations */

#include <stdio.h>

/* End of Library Declarations */

/* Variable Declarations */

int hours; /* Number of hours */
int minutes; /* Number of minutes */
int remainder_minutes; /* Number of minutes after division */
char minute_line[50]; /* Input line for minute from console */
char hour_line[50]; /* Input line for hour from console */
int result; /* Resulting number from conversion */

/* End of Variable Declarations */

int main()
{
  printf("Enter number in minutes: ");
  fgets(minute_line, sizeof(minute_line), stdin);
  sscanf(minute_line,"%d", &minutes);
  /* Operations */
  remainder_minutes = minutes % 60;
  hours = minutes / 60;
  printf("%d hours and %d minutes\n", hours, remainder_minutes);
  return(0);
}
