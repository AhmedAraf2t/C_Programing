/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 26/9/2023                                 */
/* Description  : This C program copies elements from one   */
/*                array to another using pointers.          */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

#define MAX_SIZE 50 // Define a constant 'MAX_SIZE' to represent the maximum size of arrays

int main()
{
    int size = 0; // Declare an integer variable 'size' to store the size of the arrays
    int i = 0; // Declare an integer variable 'i' to be used as a loop counter
    int arr1[MAX_SIZE]; // Declare an integer array 'arr1' with a maximum size of 50 elements
    int arr2[MAX_SIZE]; // Declare an integer array 'arr2' with a maximum size of 50 elements
    int *ptr1 = arr1; // Declare an integer pointer 'ptr1' and assign it the address of 'arr1'
    int *ptr2 = arr2; // Declare an integer pointer 'ptr2' and assign it the address of 'arr2'

    printf("Enter size of array: ");
    scanf("%d", &size); // Read the size of the arrays from the user and store it in 'size'

    printf("Enter elements of array_1 : \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]); // Read each element of 'arr1' from the user
    }

    for (i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i); // Copy elements from 'arr1' to 'arr2' using pointer arithmetic
    }

    printf("----------------------------------------\n");

    printf("Elements of array_2 : \n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr2[i]); // Print the elements of 'arr2'
    }

    return 0; // Return 0 to indicate successful execution of the program
}
