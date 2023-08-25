/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Take 3 values from user and get   */
/*                the max value.                    */
/****************************************************/
#include <stdio.h>

int main()
{
    float num1 = 0 , num2 = 0 , num3 = 0;   // We creat this variables to store the values passed from user
    printf("Enter 3 values: ");
    scanf("%f%f%f",&num1,&num2,&num3);      // Now we will take values from user and store it in variables num1 , num2 and num3

    /* We need to check the value that we take from the user to get the max value so we will use nested if */
    if(num1 > num2 && num1 > num3)          // If the value of num1 greater than num2 and value of num1 greater than num3 then print num1 is the max value
    {
        printf("num1 = %0.3f is the max value\n",num1);
    }
    else if (num2 > num1 && num2 > num3)    // else if the value of num2 greater than num1 and value of num2 greater than num3 then print num2 is the max value
    {
        printf("num2 = %0.3f is the max value\n",num2);
    }
    else                                    // else then print that the value num3 is the max value
    {
        printf("num3 = %0.3f is the max value\n",num3);
    }
    
    return 0;
}