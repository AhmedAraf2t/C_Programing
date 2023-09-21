#include <stdio.h>
/****************************************************/
/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 21/9/2023                         */
/* Description  :                                   */
/****************************************************/
/****************************************************/

int main()
{
    // Declare and initialize two integer variables
    int num1 = 11;
    int num2 = 22;

    // Declare two integer pointers and assign them the addresses of num1 and num2
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Calculate the sum of the values pointed to by ptr1 and ptr2
    int sum1 = *(ptr1) + *(ptr2);

    // Print the result of the sum1
    printf("Summing = %d\n", sum1);

    printf("--------------------------------------\n");

    // Or, you can directly access the addresses of num1 and num2 to calculate the sum
    int sum2 = *(&num1) + *(&num2);

    // Print the result of the sum2
    printf("Summing = %d\n", sum2);

    return 0; // Return 0 to indicate successful execution of the program
}
