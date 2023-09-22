/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program to input and print array   */
/*                elements using pointers.                  */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int main()
{
     int size = 0; // Declare an integer variable 'size' to store the number of elements in the array
    int arr[100]; // Declare an integer array 'arr' with a maximum size of 100 elements
    int iterator = 0; // Declare an integer variable 'iterator' to be used as a loop counter
    int *ptr = &arr; // Declare an integer pointer 'ptr' and assign the address of the first element of 'arr' to it

    printf("Enter number of elements in array: ");
    scanf("%d", &size); // Read the number of elements from the user and store it in 'size'

    for (iterator = 0; iterator < size; iterator++) {
        printf("Enter element %d : ", iterator);
        scanf("%d", &arr[iterator]); // Read each element of the array from the user
    }

    printf("-------------------------------------------------\n");

    for (iterator = 0; iterator < size; iterator++) {
        printf("Element %d is: %d\n", iterator, *(ptr + iterator)); // Print the elements of 'arr' using pointer arithmetic
    }

    return 0; // Return 0 to indicate successful execution of the program
}
