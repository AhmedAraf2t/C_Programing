/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 26/9/2023                                 */
/* Description  : This C program swaps two arrays using      */
/*                pointers.                                  */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

#define MAX_SIZE 50 // Define a constant 'MAX_SIZE' to represent the maximum size of arrays

// Function prototype to swap elements between two arrays
void swap_arrays(int arr1[MAX_SIZE], int arr2[MAX_SIZE], int size);

int main()
{
    int size = 0; // Declare an integer variable 'size' to store the size of the arrays
    int i = 0; // Declare an integer variable 'i' to be used as a loop counter
    int arr1[MAX_SIZE]; // Declare an integer array 'arr1' with a maximum size of 50 elements
    int arr2[MAX_SIZE]; // Declare an integer array 'arr2' with a maximum size of 50 elements

    printf("Enter size of the arrays: ");
    scanf("%d", &size); // Read the size of the arrays from the user and store it in 'size'

    printf("Enter elements of array_1 : \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]); // Read each element of 'arr1' from the user
    }

    printf("Enter elements of array_2 : \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]); // Read each element of 'arr2' from the user
    }

    swap_arrays(arr1, arr2, size); // Call the function 'swap_arrays' to swap the arrays

    return 0; // Return 0 to indicate successful execution of the program
}

// Function to swap elements between two arrays
void swap_arrays(int arr1[MAX_SIZE], int arr2[MAX_SIZE], int size)
{
    int i = 0; // Declare an integer variable 'i' to be used as a loop counter
    int *ptr1 = arr1; // Declare an integer pointer 'ptr1' and assign it the address of 'arr1'
    int *ptr2 = arr2; // Declare an integer pointer 'ptr2' and assign it the address of 'arr2'

    for (i = 0; i < size; i++) {
        int temp = *(ptr1 + i); // Store the value at 'ptr1+i' in a temporary variable 'temp'
        *(ptr1 + i) = *(ptr2 + i); // Assign the value at 'ptr2+i' to 'ptr1+i'
        *(ptr2 + i) = temp; // Assign the value of 'temp' to 'ptr2+i' effectively swapping the values
    }

    printf("----------------------------------------\n");

    printf("Elements in first array : \n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr1[i]); // Print the elements of 'arr1'
    }

    printf("Elements in second array : \n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr2[i]); // Print the elements of 'arr2'
    }
}
