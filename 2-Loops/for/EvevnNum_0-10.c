/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Programe that print even numbers  */
/*                between 0 and 10 using for loop.  */
/****************************************************/
#include <stdio.h>

int main()
{
    int i = 0;                  // i is the iterator which increase at each time
    for ( i = 0 ; i <= 10 ; i += 2 ) // from i = 0 to i = 10 print even values by starting from 0 and increse i by 2 in each time
    {
        printf("%i\n",i);
    }
    
    return 0;
}