/********************************************************************************/
/********************************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi                               */
/* Created at   : 1/9/2023                                                      */
/* Description  : Write a C program to check whether a number is divisible by 5 */
/*                and 11 or not using if else. How to check divisibility of any */
/*                number in C programming. C program to enter any number and    */
/*                check whether it is divisible by 5 and 11 or not. Logic to    */
/*                check divisibility of a number in C program                   */
/********************************************************************************/
/********************************************************************************/
/* Example                                                                      */
/*    -Input:                                                                   */
/*        Input number: 55                                                      */
/*    -Output:                                                                  */
/*        Number is divisible by 5 and 11                                       */
/********************************************************************************/
/********************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num = 0;                   // Declare a variable 'num' to store the input number
    printf("Enter Number to check divisibility : ");
    scanf("%d",&num);                       // Read the number from the user and store it in 'num'

    if( (num % 5 == 0) && (num % 11 == 0) ){ // Check if 'num' is divisible by both 5 and 11
        printf("Number is divisible by 5 and 11");
    }
    else{
        printf("Number is not divisible by 5 and 11");
    }

    return 0; // Indicate successful program execution
}