/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program demonstrates the behavior  */
/*                of passing an integer to a function and   */
/*                modifying it within the function          */
/*                (Call by Value).                          */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

// Function prototype for 'Add_One'
void Add_One(int num);

int main()
{
    int num = 0; // Declare and initialize an integer variable 'num' with the value 0

    Add_One(num); // Call the 'Add_One' function and pass 'num' as an argument

    printf("Number after function executed  : %d", num); // Print the value of 'num' after the function call

    return 0; // Return 0 to indicate successful execution of the program
}

// Definition of the 'Add_One' function
void Add_One(int num)
{
    num = num + 1; // Increment 'num' by 1 (this modification only affects the local copy of 'num' within the function)
    printf("Number after increment          : %d\n", num); // Print the value of 'num' after the increment
}
