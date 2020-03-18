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

}
