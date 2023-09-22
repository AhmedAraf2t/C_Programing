/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program calculates the size of     */
/*                array using pointers.                     */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an integer array 'arr' with 5 elements

    int *ptr1 = &arr[0]; // Declare an integer pointer 'ptr1' and assign the address of the first element of 'arr' to it
    int *ptr2 = &arr[4]; // Declare an integer pointer 'ptr2' and assign the address of the last element of 'arr' to it

    printf("Size of Array is: %d\n", (ptr2 - ptr1) + 1); // Calculate and print the size of the array 'arr'

    return 0; // Return 0 to indicate successful execution of the program
}
