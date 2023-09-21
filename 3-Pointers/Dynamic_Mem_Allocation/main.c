/************************************************************/
/************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi           */
/* Created at   : 21/9/2023                                 */
/* Description  : This C program demonstrates dynamic memory*/
/*                allocation using the malloc function.     */
/************************************************************/
/************************************************************/
#include <stdio.h> // Include the standard input/output library

int main()
{
    int size = 0; // Declare an integer variable 'size' to store the size of memory to be allocated

    printf("Enter size you need to allocate in memory (.heap): "); // Prompt the user to enter the size
    scanf("%d", &size); // Read the size from the user

    int *ptr1 = malloc(size); // Dynamically allocate memory of 'size' bytes and store its address in 'ptr1'

    // Or, you can allocate memory based on the size of a data type (char) multiplied by 'size'
    int *ptr2 = malloc(sizeof(char) * size);

    if (NULL == ptr1) // Check if memory allocation was successful (ptr1 is NULL if allocation fails)
    {
        printf("Memory reservation failed !!\n"); // Print a message indicating that memory allocation failed
    }
    else
    {
        printf("Memory reserved successfully.\n"); // Print a message indicating successful memory allocation
    }

    return 0; // Return 0 to indicate successful execution of the program
}
