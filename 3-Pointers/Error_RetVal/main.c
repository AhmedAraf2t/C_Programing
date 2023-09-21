/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program demonstrates a simple      */
/*                function 'sum_fun' for adding two         */
/*                integers and handling potential errors.   */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

// Function prototype for 'sum_fun'
char sum_fun(int *ptr1, int *ptr2);

int main()
{
    int num1 = 0; // Declare and initialize an integer variable 'num1' with the value 0
    int num2 = 0; // Declare and initialize an integer variable 'num2' with the value 0

    printf("Enter Two Values: "); // Prompt the user to enter two values
    scanf("%d", &num1); // Read the first value from the user and store it in 'num1'
    scanf("%d", &num2); // Read the second value from the user and store it in 'num2'

    char RetValue = 0; // Declare and initialize a character variable 'RetValue' with the value 0

    // Call the 'sum_fun' function to add the two numbers and handle errors
    RetValue = sum_fun(&num1, &num2);

    if (RetValue == 1) {
        printf("Error in sum function!!\n"); // Print an error message if 'sum_fun' returns an error code
    }
    else {
        printf("DONE\n"); // Print a success message if 'sum_fun' completes without errors
    }

    return 0; // Return 0 to indicate successful execution of the program
}

// Definition of the 'sum_fun' function
char sum_fun(int *ptr1, int *ptr2)
{
    char RetVal = 0; // Declare and initialize a character variable 'RetVal' with the value 0

    if (NULL == ptr1 || NULL == ptr2) { // Check if either of the pointers is NULL
        RetVal = 1; // Set 'RetVal' to 1 to indicate an error if any of the pointers are NULL
    }
    else {
        RetVal = 0; // Set 'RetVal' to 0 to indicate success
        int Result = *ptr1 + *ptr2; // Calculate the sum of the two integers pointed to by 'ptr1' and 'ptr2'
        printf("%d + %d = %d\n", *ptr1, *ptr2, Result); // Print the sum
    }

    return RetVal; // Return 'RetVal' (0 for success, 1 for error)
}
