/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program calculates the square of   */
/*                three numbers using functions and handles */
/*                potential errors.                         */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

// Function prototype for 'square_Num'
char square_Num(int *ptr1);

// Function prototype for 'Get_square'
char Get_square(int *ptr1, int *ptr2, int *ptr3);

int main()
{
    int num1 = 10; // Declare and initialize an integer variable 'num1' with the value 10
    int num2 = 10; // Declare and initialize an integer variable 'num2' with the value 10
    int num3 = 10; // Declare and initialize an integer variable 'num3' with the value 10
    int Error_status = 0; // Declare and initialize an integer variable 'Error_status' with the value 0 to track errors

    // Call the 'Get_square' function to calculate the square of the numbers and handle errors
    Error_status = Get_square(&num1, &num2, &num3);

    if (Error_status == 0) {
        printf("Numbers after getting square = \t%d\t , \t%d\t , \t%d\n", num1, num2, num3); // Print the square of the numbers
    }
    else {
        printf("Error !!!!\n"); // Print an error message if an error occurred
    }

    return 0; // Return 0 to indicate successful execution of the program
}

// Definition of the 'square_Num' function
char square_Num(int *ptr1)
{
    char Error_RetVal = 0; // Declare and initialize a character variable 'Error_RetVal' with the value 0

    if (NULL == ptr1) { // Check if the pointer 'ptr1' is NULL
        Error_RetVal = 1; // Set 'Error_RetVal' to 1 to indicate an error if 'ptr1' is NULL
    }
    else {
        *ptr1 *= *ptr1; // Calculate the square of the number pointed to by 'ptr1' and update it
        Error_RetVal = 0; // Set 'Error_RetVal' to 0 to indicate success
    }

    return Error_RetVal; // Return 'Error_RetVal' (0 for success, 1 for error)
}

// Definition of the 'Get_square' function
char Get_square(int *ptr1, int *ptr2, int *ptr3)
{
    char Error_RetVal = 0; // Declare and initialize a character variable 'Error_RetVal' with the value 0

    Error_RetVal = square_Num(ptr1); // Call 'square_Num' for 'ptr1' and store its return value in 'Error_RetVal'

    Error_RetVal |= square_Num(ptr2); // Call 'square_Num' for 'ptr2' and combine its return value with 'Error_RetVal'

    Error_RetVal |= square_Num(ptr3); // Call 'square_Num' for 'ptr3' and combine its return value with 'Error_RetVal'

    return Error_RetVal; // Return 'Error_RetVal' indicating the overall result (0 for success, 1 for error)
}
