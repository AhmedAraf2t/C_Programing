/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 26/9/2023                                 */
/* Description  : This C program to reverse an array using  */
/*                pointers                                  */
/************************************************************/
/************************************************************/
#include <stdio.h>  // Include the standard input/output library

#define MAX_SIZE 50 // Define a constant 'MAX_SIZE' to represent the maximum size of the array

// Function prototype to reverse an array
void reverse_array(int arr1[MAX_SIZE], int size);

int main()
{
    int size = 0; // Declare an integer variable 'size' to store the size of the array
    int i = 0; // Declare an integer variable 'i' to be used as a loop counter
    int arr1[MAX_SIZE]; // Declare an integer array 'arr1' with a maximum size of 50 elements

    printf("Enter size of array: ");
    scanf("%d", &size); // Read the size of the array from the user and store it in 'size'

    printf("Enter elements of array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]); // Read each element of 'arr1' from the user
    }

    reverse_array(arr1, size); // Call the function 'reverse_array' to reverse the array

    printf("----------------------------------------\n");

    printf("Elements of array after reversing: \n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr1[i]); // Print the elements of 'arr1' after reversing
    }

    return 0; // Return 0 to indicate successful execution of the program
}

// Function to reverse an array using pointers
void reverse_array(int arr1[MAX_SIZE], int size)
{
    int i = 0; // Declare an integer variable 'i' to be used as a loop counter

    int *ptr1 = arr1; // Declare an integer pointer 'ptr1' and assign it the address of the first element of 'arr1'
    int *ptr2 = &arr1[size - 1]; // Declare an integer pointer 'ptr2' and assign it the address of the last element of 'arr1'
    for (i = 0; i < size / 2; i++) {
        int temp = *(ptr1 + i); // Store the value at 'ptr1+i' in a temporary variable 'temp'
        *(ptr1 + i) = *(ptr2 - i); // Assign the value at 'ptr2-i' to 'ptr1+i'
        *(ptr2 - i) = temp; // Assign the value of 'temp' to 'ptr2-i' effectively reversing the elements
    }
}

