/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Take age from the user and print  */
/*                if elligable or not for voting    */
/****************************************************/
#include<stdio.h>

int main()
{
    int age = 0;        // We creat this variable to store the age of the person
    printf("Please enter your age : ");
    scanf("%d",&age);   // Now we will take the age from the user

    /* We need to check the age of the person*/
    if(age >= 18)       // If the age of the person greater than or equal 18 years 
    {
        printf("Elligable for voting ^_^ \n");
    }
    else                // else the age of the person less than 18 years
    {
        printf("Sorry not elligable for voting \n");
    }
    
    return 0;
}