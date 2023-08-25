/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Programe that print numbers from  */
/*                0 to 9 using for loop.            */
/****************************************************/
#include <stdio.h>

int main()
{
    int i = 0 , j =0;                  // i & j are iterators which increased at each time
    for ( i = 0 ; i < 2 ; i++) // from i = 0 to i = 2 print I'm the here 2
    {
        printf("Outer\n",i);
        for (j = 0; j < 3; j++)
        {
            printf("Inner\n");
        }
    }
    
    return 0;
}