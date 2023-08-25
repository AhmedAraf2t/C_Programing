/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Programe that print numbers from  */
/*                0 to 9 using for loop.            */
/****************************************************/
#include <stdio.h>

int main()
{
    int i = 0;                  // i is the iterator which increase by 1 at each time
    for ( i = 0 ; i < 10 ; i++) // from i = 0 to i = 9 print value of i knwoing that i increased by 1 each time
    {
        printf("%i\n",i);
    }
    
    return 0;
}