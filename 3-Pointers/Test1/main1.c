#include <stdio.h>
/****************************************************/
/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 21/9/2023                         */
/* Description  :                                   */
/****************************************************/
/****************************************************/

int main()
{
    int num = 11;
    printf("Address of num  : 0X%X\n",&num);        // print address of num
    int *ptr = &num;                                // pointer to point to the address of num
    printf("Address of num  : 0X%X\n",ptr);         // print address of num which stored in ptr
    printf("Value of num    : %d\n",*ptr);          // print value of num using dereference
    printf("Value of num    : %d\n",*(&num));       // another method by using dereference

    *ptr = 22;                                      // change value of num using pointer
    printf("Value of num    : %d\n",*ptr);
    printf("Value of num    : %d\n",num);

    return 0;
}
