/********************************/
/* Program Name: ascii2bin.c    */
/* Author: Armand Minassian     */
/* Date:   Feb 27, 2021         */
/********************************/
/* Description: ASCII Conversion*/
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

#define max_int (255)
#define byte (char)

int main (int argc, char * argv[], char ** envp) {

  read(0, header, 4);
  
  char header[count];
  int sum = 0;   
  unsigned char checksum;
  unsigned char complement;
  

  
    offset = ?;
    number = 0;
    
    retval = read(0, &ascii_value, 1);
    while (retval == 1)
        digit = ascii_value - offset;
        number = number << 1 + digit;  
        retval = read(0, &ascii_value, 1);
        
    printf("%d\n", number);
    return 0;

  
 fprintf(stdout, "Stored Checksum: %d, Computed Checksum: %d\n", checksum, complement);

  if (checksum != complement ) {
    fprintf(stderr, "Error Detected!\n"); 
    return 1;
  }

  return 0;
}
