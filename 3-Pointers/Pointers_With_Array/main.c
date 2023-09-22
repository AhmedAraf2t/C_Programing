/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program demonstrates the use of a  */
/*                pointers with arrays.                     */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an integer array 'arr' with 5 elements

    int *ptr = &arr; // Declare an integer pointer 'ptr' and assign the address of the array 'arr' to it

    printf("Address of element zero or address of array : 0x%X\n", ptr); // Print the address of the array 'arr' (element zero)
    printf("Value of element zero --------------------> : %d\n", *ptr); // Print the value of the first element of 'arr'

    printf("---------------------------------------------------------\n");

    ptr += 1; // Increment the pointer 'ptr' by 1 (moves to the next element in the array)
    printf("Address of element one -------------------> : 0x%X\n", ptr); // Print the address of the second element of 'arr'
    printf("Value of element one ---------------------> : %d\n", *ptr); // Print the value of the second element of 'arr'

    printf("---------------------------------------------------------\n");

    ptr += 1; // Increment the pointer 'ptr' by 1 again (moves to the next element)
    printf("Address of element two -------------------> : 0x%X\n", ptr); // Print the address of the third element of 'arr'
    printf("Value of element two ---------------------> : %d\n", *ptr); // Print the value of the third element of 'arr'

    return 0; // Return 0 to indicate successful execution of the program
}
