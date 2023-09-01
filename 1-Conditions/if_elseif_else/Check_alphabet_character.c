/********************************************************************************/
/********************************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi                               */
/* Created at   : 1/9/2023                                                      */
/* Description  : Write a C program to input a character from user and check    */
/*                whether the given character is alphabet or not using if else. */
/*                How to check whether a character is alphabet or not in C      */
/*                programming. Logic to check if a character is alphabet or not */
/*                in C program.                                                 */
/********************************************************************************/
/********************************************************************************/
/* Example                                                                      */
/*    -Input:                                                                   */
/*        Input character: a                                                    */
/*    -Output:                                                                  */
/*        'a' is alphabet                                                       */
/********************************************************************************/
/********************************************************************************/

#include <stdio.h>

int main(){
    char c = 0;         // Declare a character variable 'c' to store the input character
    printf("Enter character to check alphabet or not: "); // Prompt the user to enter a character
    scanf("%c", &c);    // Read the character from the user and store it in 'c'

    // Check if the character is an alphabet character (uppercase or lowercase)
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("'%c' is an alphabet character\n", c); // If it is, print that it's an alphabet character
    }
    else {
        printf("'%c' is not an alphabet character\n", c); // If not, print that it's not an alphabet character
    }

    return 0; // Indicate successful program execution
}