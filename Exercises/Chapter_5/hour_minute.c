/*
  ----- Convert Hour - Minutes to Minutes -------------

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
char minute_line[50]; /* Input line for minute from console */
char hour_line[50]; /* Input line for hour from console */
int result; /* Resulting number from conversion */

/* End of Variable Declarations */
int main()
{
  /* Hours */
  printf("Enter hours: ");
  fgets(hour_line, sizeof(hour_line), stdin);
  sscanf(hour_line, "%d", &hours);
  /* Minutes */
  printf("Enter minutes: ");
  fgets(minute_line, sizeof(minute_line), stdin);
  sscanf(minute_line, "%d", &minutes);
  /* Operations */
  result = (hours * 60) + minutes;
  printf("Result in minutes: %d\n", result);
  return(0);
}
