/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Garrett Becker
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;

  //<<<<<<< HEAD
  printf("Will Bryan and Garret Becker ");
  //=======
  //>>>>>>> 920372821d5d3562d53733b02c1d65555ae6730c

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("love robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
  printf("    i_i    \n"
	 "   [b_b]   \n"
	 "  /|___|\\  \n"
         "   d   b   "); 

}
