/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Take two values from user and     */
/*                print the biggest value           */
/****************************************************/
#include <stdio.h>

int main()
{
    float num1 = 0,num2 = 0;    // We creat this variables to store the two values from user

    printf("Enter two numbers to get tha max number: ");
    scanf("%f%f",&num1,&num2);  // Now we will take two values from user

    /* We need to check the values that we takes from the user*/
    if (num1 > num2)            // If the value 1 greater than value 2 then print that the value 1 is the biggest 
    {
        printf("Value %.3f is the biggest value\n",num1);
    }
    else                        // else the value 2 greater than value 1 then print that the value 2 is the biggest 
    {
        printf("Value %.3f is the biggest value\n",num2);
    }

    return 0;
}