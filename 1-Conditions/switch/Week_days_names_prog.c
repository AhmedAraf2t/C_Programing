/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Take number from user and print   */
/*                the name of day                   */
/****************************************************/
#include <stdio.h>


int main()
{
    unsigned int Day_num = 0;       // We creat this variable to store the value passed from user
    printf("Enter Day number between 1-7 to tell you the name of the day: ");
    scanf("%i",&Day_num);           // Now we will take value from user and store it in Day_num variable

    /* We need to check the value that we take from the user to determine name of day */
    switch (Day_num)                // Check the Day_num
    {
    case 1:                         // First case => Day_num = 1 then print Monday
        printf("Monday\n");
        break;
    case 2:                         // Second case => Day_num = 2 then print Tuesday
        printf("Tuesday\n");
        break;
    case 3:                         // Third case => Day_num = 3 then print Wednesday
        printf("Wednesday\n");
        break;
    case 4:                         // Fourth case => Day_num = 4 then print Thursday
        printf("Thursday\n");
        break;
    case 5:                         // Fifth case => Day_num = 5 then print Friday
        printf("Friday\n");
        break;
    case 6:                         // Sixth case => Day_num = 6 then print Saturday
        printf("Saturday\n");
        break;
    case 7:                         // Seventh case => Day_num = 7 then print Sunday
        printf("Sunday\n");
        break;
    
    default:                         // Last case => Day_num not between 1-7
        printf("Error number!!!");
        break;
    }
    
    return 0;
}