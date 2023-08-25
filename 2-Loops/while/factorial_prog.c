/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 26/8/2023                         */
/* Description  : Programe to find factorial using  */
/*                while loop.                       */
/****************************************************/

int Get_Factorial(int num);         // Prototype of our function

int main()
{
    int num = 0;                    // the number that the user need to get factorial
    printf("Enter Number to get factorial: \n");
    scanf("%d",&num);               // take value of number from user and store it in num var.
    int result = Get_Factorial(5);  // excute factorial function by give it the nunber & recive return value in result var.
    printf("The factorial of %d = %d\n",num,result);          // Now we print the result of the factorial
    
    return 0;
}

/****************************************************/
/****************************************************/
/* Function Name: Get_Factorial						*/
/* Return Type	: integer       					*/
/* Arguments	: int num							*/
/* Functionality: Get Factorial         			*/
/****************************************************/
/****************************************************/
int Get_Factorial(int num)      
{
    int result;                     // This variable to store the result of factorial

    if(num == 0)                    // We must check if the user put 0 because factorial of 0 = 1
    {
        result = 1;                 // Because user put 0 then we will write 1 in the result
    }
    else
    {
        int i = result = 1;         // intialize i and result with 1
        while(i <= num)             // chaeck i value to ensure that value of i not bigger than number
        {
            result = result * i;    // 1*1 , 1*2 , 1*2*3 , 1*2*3 , 1*2*3*4 , 1*2*3*4*5
            i++;                    // each round we will increase i with 1 
        }
    }
    return result;                  // now we will return the value of the result and we need to recive value in var.
}