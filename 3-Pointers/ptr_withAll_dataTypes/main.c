/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 21/9/2023                                 */
/* Description  : This C program demonstrates the use of    */
/*                pointers to access and print the value    */
/*                stored in an integer variable.            */
/*                This demonstrates how different pointer   */
/*                types can be used to interpret and access */
/*                the same memory location with different   */
/*                data types.                               */
/************************************************************/
/************************************************************/

#include <stdio.h>  // Include the standard input/output library

int num1 = 0X11223344; // Declare and initialize an integer variable 'num1' with the value 0X11223344

char *ptr1; // Declare a char pointer variable 'ptr1'
short *ptr2; // Declare a short pointer variable 'ptr2'
int *ptr3; // Declare an int pointer variable 'ptr3'

int main()
{
    ptr1 = &num1; // Assign the address of 'num1' to 'ptr1'
    ptr2 = &num1; // Assign the address of 'num1' to 'ptr2'
    ptr3 = &num1; // Assign the address of 'num1' to 'ptr3'

    printf("0X%X\n", *ptr1); // Print the lower byte of 'num1' pointed to by 'ptr1'
    printf("0X%X\n", *ptr2); // Print the two lower bytes of 'num1' pointed to by 'ptr2'
    printf("0X%X\n", *ptr3); // Print the entire 'num1' pointed to by 'ptr3'

    return 0; // Return 0 to indicate successful execution of the program
}
