//Reverse case a String.

#include<stdio.h>
#include<ctype.h> // to use system defined function islower & toupper

int main()
{
    printf("\n\n\t\t--------------------------\n\n\n");

    char alphabet;
    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line

    alphabet=getchar();

    printf("\n\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else 
        // must be an uppercase character
        printf("%c",tolower(alphabet)) ;

    printf("\n\n\t\t\t-------------------- !\n\n\n");
    return 0;
}

//Checing for VOWELS
#include<stdio.h>

int main()
{
    printf("\n\n\t\t----------------------\n\n\n");

    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n\n%c is a vowel.\n\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n\n", ch);
    }
    printf("\n\n\t\t\t---------------!\n\n\n");
    return 0;
}

//Finding ASCI Value For Character
#include<stdio.h>

int main()
{
    printf("\n\n\t\t------------------------\n\n\n");

    char c;
    printf("Enter a character : ");
    scanf("%c" , &c);
    printf("\n\nASCII value of %c = %d",c,c);

    printf("\n\n\t\t\t---------------------!\n\n\n");
    return 0;
}

//Largest and Smallest Numbers
#include<stdio.h>

int a,b;
int main()
{
    printf("\n\n\t\t--------------------\n\n\n");
    printf("\n\nEnter the two values to find the greatest and smallest number: \n");
    scanf("%d%d", &a, &b);

    if(a == b)
        printf("Both are equal\n");
        
    else if(a < b)
    {
        printf("\n\nThe largest number is %03d\n", b);
        printf("\nThe smallest number is %03d\n", a);
        printf("\nThe largest number is %03d\n", b);
    }
    else    //Only possibility remaining
    {
        printf("The largest number is %03d\n", a);
        printf("The smallest number is %03d\n", b);
    }
    printf("\n\n\t\t\t-----------------\n\n\n");
    return 0;
}

//Using GET Function
#include<stdio.h>

int main()
{
    printf("\n\n\t\t---------------------\n\n\n");

    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n\n");

    gets(str);
    printf("\n\nWelcome to Studytonight  %s\n\n\n", str);
    printf("\n\n\t\t\t------------------ !\n\n\n");
    return 0;
}

