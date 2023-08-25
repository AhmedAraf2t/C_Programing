/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Take value from user and check if */
/*                user input negative , zero or     */
/*                postive value                     */
/****************************************************/
#include <stdio.h>

int main()
{
    float num = 0;          // We creat this variable to store the value passed from user
    printf("Enter value to check : ");
    scanf("%f",&num);       // Now we will take value from user and store it in num variable

    /* We need to check the value that we take from the user if it's negative , zero or postive value */
    if(num > 0)             // If the value greater than 0 then print that the value is Postive value
    {
        printf("%0.3f are Postive value\n",num);
    }
    else if (num == 0)      // else if the value equal 0 then print that the value is Zero value
    {
        printf("%0.3f are Zero value\n",num);
    }
    else                    // else then print that the value is Negative value
    {
        printf("%0.3f are Negative value\n",num);
    }
    
    return 0;
}