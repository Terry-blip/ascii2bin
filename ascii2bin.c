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

#define byte (char)

int main (int argc, char * argv[], char ** envp) {

    char digit = 0;
    int offset = ?;
    int number = 0;
    int bufferSize = 4;
    char ascii_value[bufferSize];
    
    char retval = read(0, ascii_value, 1);

    while (retval == 1 || retval == 0)
    {
        digit = ascii_value - offset;
        number = number << 1 + digit;  
        retval = read(0, &ascii_value, 1);

        bufferSize = bufferSize + 4;
    }

    printf("%d\n", number);
    return 0;

}
