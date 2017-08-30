/* *******************************

   Hello World Program for Demonstration purposes:

   Author: Kaan Eraslan
   Taken from: Practical C Programming
   Purpose: Demonstration.

   Usage:

       Run the program and the message should appear at the terminal


***********************************/
#include <stdio.h>
/*
  the statement #include causes a set of data
  declarations to be taken from an include file.
  the function printf comes from this package.

 */

int main()
{
  /* The interior of the
   curly brackets is called routine
  */
  printf("Hello World!!");
  /*
    the function printf is used for displaying output on screen.
    the ; indicates the termination of the statement
   */
  return (0);
  /* return statement (0)
     implies that the program exited normally
     A nonzero status indicates an e rror—the bigger
     the return value, the more severe the error. Typically,
     a status of 1 is used for the most simple errors,
     like a missing file or bad command -line syntax.
  */
}
