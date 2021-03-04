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
#include "math.h"
#include <unistd.h>

//#define byte char
//#define byte unsigned char

int main (int argc, char * argv[], char ** envp) {

    int digit;
    int offset = 0x30; //0b11110 = %d 30
    unsigned int number = 0;
    int bufferSize = 8;
    char ascii_value;
    int retval;

    retval = read(0, &ascii_value, 1);
    printf("ret: %d\n", retval);

    printf("read: %c\n", ascii_value);


    while (retval == 1)
    {

        digit = ascii_value - offset;
        number = (number << 1) + digit;

        printf("DIGIT: %d\n", digit);
        printf("NUMBER: %d\n", number);

        retval = read(0, &ascii_value, 1);

        printf("read: %c\n", ascii_value);
        printf("ret: %d\n", retval);

        if (ascii_value == '\n') {
        retval = 0;
        printf("ret FORCE ZERO: %d\n", retval);
        }

    }

    printf("FINAL NUMBER: %u \n", number);
    return 0;

}