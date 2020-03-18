#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function
void multiplication();

int main()
{
    int ch;

    while(1)
    {
        printf("\n*************** Multiplication ***************\n\n");

        printf("1. Multiplication\n");
        printf("0. Exit\n\n");

        puts("**********************************************");

        printf("Please choose an action: ");
        scanf(" %d", &ch);

        switch(ch)
        {
            case 1: multiplication();
            break;
            case 0: exit(0); // Terminates the process
        }
    }

    return 0;
}

void multiplication()
{
    // sample numbers
    char n1[] = "91111111111111111111111111111111111111111111111112";
    char n2[] = "00000000000000000000000000000000000000000000000012";

    printf("\n-----------------Sample numbers-----------------\n");
    printf("%s\n", n1);
    printf("%s\n", n2);
    printf("\n------------------------------------------------\n");

    // use sample numbers or input numbers as string
    char choice;
    printf("Do you want to use sample numbers?\n"
           "~~~> Yes: y (or any letter)\n"
           "~~~> No: n\nYour choice:");
    scanf(" %c", choice);

    // enter numbers that you want
    if (choice == 'n')
    {
        printf("Please enter the first number:\n");
        scanf("%s", n1);
        printf("Please enter the second number:\n");
        scanf("%s", n2);
    }

}
