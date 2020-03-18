#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 50
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
    char n1[MAXL];
    char n2[MAXL];

    // use sample numbers or input numbers as string
    char choice;
    printf("Do you want to use sample numbers?\n"
           "~~~> Yes: y (or any letter)\n"
           "~~~> No: n\nYour choice:");
    scanf(" %c", &choice);

    // enter numbers that you want
    if (choice == 'n')
    {
        printf("Please enter the first number:\n");
        scanf("%s", n1);
        printf("Please enter the second number:\n");
        scanf("%s", n2);
    } else
    {
        // sample numbers
        char n1[] = "91111111111111111111111111111111111111111111111112";
        char n2[] = "00000000000000000000000000000000000000000000000012";

        printf("\n-----------------Sample numbers-----------------\n");
        printf("%s\n", n1);
        printf("%s\n", n2);
        printf("\n------------------------------------------------\n");
    }

    // Put the longer number first
    char temp[MAXL];
    if (strlen(n1) < strlen(n2))
    {
        strcpy(temp, n1);
        strcpy(n1, n2);
        strcpy(n2, temp);
    }

    // Length of numbers
    int L1 = strlen(n1);
    int L2 = strlen(n2);

    int n=0, m;
    int lent = 2*L1 ; // The resultant number length is at most 2 times the first number.
    int carry=0, summ=0;

    // steps of calculation, like using pen and paper
    int step[L2][lent];
    memset(step, 0, L2*lent*sizeof(int));
    // answer will be stored in result
    int result[2*L1];
    memset(step, 0, lent*sizeof(int));

    // String of numbers to integer numbers
    int num1[L1];
    int num2[L2];
    for (int i=0; i<L1; i++)
    {
         num1[i] = n1[i] - '0'; // Converts char to integer
    }
    for (int i=0; i<L2; i++)
    {
         num1[i] = n2[i] - '0'; // Converts char to integer
    }

    // Multiplication by algorithm.
    for (int i=L2-1; i>=0; i--)
    {
        m = lent;
        for (int j=L1-1; j>=0; j--)
        {
            step[n][m] = (carry + (num2[i] * num1[j])) % 10;
            carry = (carry + num2[i] * num1[j]) / 10;
            m --;

            if (m==lent-L1 && carry != 0) // L1 digits are passed. is there still carry? if yes insert it.
            {
                step[n][m] = carry;
                carry=0;
            }
        }
        n ++;
        lent --;
    }
    puts("");


}
