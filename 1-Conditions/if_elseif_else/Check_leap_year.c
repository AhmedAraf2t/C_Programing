/********************************************************************************/
/********************************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi                               */
/* Created at   : 1/9/2023                                                      */
/* Description  : Write a C program to check leap year using if else. How to    */
/*                check whether a given year is leap year or not in C           */
/*                programming. C Program to input year from user and check      */
/*                whether the given year is leap year or not using ladder if    */
/*                else. Logic to check leap year in C programming.              */
/********************************************************************************/
/********************************************************************************/
/* Example                                                                      */
/*    -Input:                                                                   */
/*        Input year: 2004                                                      */
/*    -Output:                                                                  */
/*        2004 is leap year.                                                    */
/********************************************************************************/
/********************************************************************************/

#include <stdio.h>

int main(){
    int year = 0;               // Declare a variable 'year' to store the input year
    printf("Enter Year: ");     // Prompt the user to enter a year
    scanf("%d", &year);         // Read the year from the user and store it in 'year'

    // Check if the year is a leap year based on the leap year rules
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap Year", year);  // If the conditions are met, it's a leap year
    }
    else {
        printf("%d is NOT a leap Year", year);  // If not, it's not a leap year
    }

    return 0;  // Indicate successful program execution
}