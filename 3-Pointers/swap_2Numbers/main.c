/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 21/9/2023                                 */
/* Description  : This C program demonstrates the concept of*/
/*                pointers and how to swap values using     */
/*                pointers.                                 */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int main()
{
    int num1 = 10; // Declare and initialize an integer variable 'num1' with the value 10
    int num2 = 20; // Declare and initialize an integer variable 'num2' with the value 20

    printf("num1 = %d\n", num1); // Print the value of 'num1'
    printf("num2 = %d\n", num2); // Print the value of 'num2'

    printf("-----------------------------\n"); // Print a separator line

    int *ptr1 = &num1; // Declare an integer pointer 'ptr1' and assign the address of 'num1' to it
    int *ptr2 = &num2; // Declare an integer pointer 'ptr2' and assign the address of 'num2' to it

    printf("Address of num1 = 0x%X\n", ptr1); // Print the address of 'num1' using 'ptr1'
    printf("Address of num2 = 0x%X\n", ptr2); // Print the address of 'num2' using 'ptr2'

    printf("-----------------------------\n"); // Print a separator line

    int *temp = ptr1; // Declare an integer pointer 'temp' and assign the value of 'ptr1' to it
    ptr1 = ptr2; // Update 'ptr1' to point to the same address as 'ptr2'
    ptr2 = temp; // Update 'ptr2' to point to the same address as 'temp'

    printf("Address of num1 = 0x%X\n", ptr1); // Print the updated address of 'num1' using 'ptr1'
    printf("Address of num2 = 0x%X\n", ptr2); // Print the updated address of 'num2' using 'ptr2'

    printf("-----------------------------\n"); // Print a separator line

    printf("num1 after swaping = %d\n", *ptr1); // Print the value of 'num1' after the swap
    printf("num2 after swaping = %d\n", *ptr2); // Print the value of 'num2' after the swap

    printf("-----------------------------\n"); // Print a separator line

    printf("num1 = %d\n", num1); // Print the value of 'num1' (unchanged)
    printf("num2 = %d\n", num2); // Print the value of 'num2' (unchanged)

    return 0; // Return 0 to indicate successful execution of the program
}
