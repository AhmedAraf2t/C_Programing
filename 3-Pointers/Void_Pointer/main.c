/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program demonstrates the use of    */
/*                void pointers and explicit type casting.  */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int num1 = 11; // Declare and initialize an integer variable 'num1' with the value 11
int num2 = 22; // Declare and initialize an integer variable 'num2' with the value 22

void *ptr = NULL; // Declare a void pointer 'ptr' and initialize it to NULL

int main()
{
    ptr = &num1; // Assign the address of 'num1' to 'ptr'
    printf("Address of num1 : 0x%X\n", ptr); // Print the address of 'num1' in hexadecimal format

    ptr = &num2; // Assign the address of 'num2' to 'ptr'
    printf("Address of num2 : 0x%X\n", ptr); // Print the address of 'num2' in hexadecimal format

    /*
    printf("Value of num2 : %d\n", *ptr); // Error: invalid use of void expression, so explicit type casting is needed
    */

    /* Explicit type casting to print the value of 'num2' */
    printf("Value of num2   : %d\n", *((int *)ptr)); // Print the value of 'num2' using explicit type casting

    /* Size of void (compiler-dependent) */
    printf("Size of void    : %d byte\n", sizeof(void)); // Print the size of the 'void' data type

    return 0; // Return 0 to indicate successful execution of the program
}
