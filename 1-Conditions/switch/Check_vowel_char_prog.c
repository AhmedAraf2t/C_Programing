/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 8/8/2023                          */
/* Description  : Programe to check if vowel        */
/*                characters                        */
/****************************************************/
#include <stdio.h>

int check_vowel(char character);

int main()
{
    char character;
    printf("Enter Character to check vowel or not: \n");
    scanf("%c",&character);
    int retVal = check_vowel(character);
    if(retVal == 1)
    {
        printf("%c is Vowel character",character);
    }
    else
    {
        printf("%c is not Vowel Character",character);
    }
    return 0;
}


int check_vowel(char character)
{
    int type;

    switch (character)
    {
    /*  Simple code     */
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        type = 1;
    

   /* another way
    case 'A':
        type = 1;
        break;
    case 'E':
        type = 1;
        break;
    case 'I':
        type = 1;
        break;
    case 'O':
        type = 1;
        break;
    case 'U':
        type = 1;
        break;
    case 'a':
        type = 1;
        break;
    case 'e':
        type = 1;
        break;
    case 'i':
        type = 1;
        break;
    case 'o':
        type = 1;
        break;
    case 'u':
        type = 1;
        break;
    default:
        type = 0;
        break;
    */
    }

    return type;
}