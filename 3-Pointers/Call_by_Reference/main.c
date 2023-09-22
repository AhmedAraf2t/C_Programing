/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shennawy           */
/* Created at   : 22/9/2023                                 */
/* Description  : This C program demonstrates passing an    */
/*                integer by reference to a function and    */
/*                modifying its value.                      */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

// Function prototype for 'Add_One'
void Add_One(int *ptr);

int main()
{
    int num = 0; // Declare and initialize an integer variable 'num' with the value 0

    printf("Number before function executed : %d\n", num); // Print the initial value of 'num'

    Add_One(&num); // Call the 'Add_One' function and pass the address of 'num' as an argument

    printf("Number after function executed  : %d\n", num); // Print the updated value of 'num'

    return 0; // Return 0 to indicate successful execution of the program
}

// Definition of the 'Add_One' function
void Add_One(int *ptr)
{
    *ptr = *ptr + 1; // Increment the value pointed to by 'ptr' by 1 (modifies the original 'num')
    printf("Number after increment          : %d\n", *ptr); // Print the updated value of 'num'
}
