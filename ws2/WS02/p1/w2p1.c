/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#include <stdio.h>

#define TAX_PERCENT 0.13

int main()
{
    float shirtS;
    float shirtM;
    float shirtL;
    int number;
    int subTotal, taxes, total;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf(" %f",&shirtS);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %f",&shirtM);
    printf("Enter the price for a LARGE shirt: $");
    scanf(" %f",&shirtL);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",shirtS);
    printf("MEDIUM : $%.2f\n",shirtM);
    printf("LARGE  : $%.2f\n",shirtL);
    printf("\n");
    printf("Patty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&number);
    printf("\n");

    subTotal = number * shirtS * 100;
    taxes = (subTotal / 100) * TAX_PERCENT * 100;
    total = ((float)subTotal / 100 + (float)taxes / 100) * 100;

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n",number);
    printf("Sub-total: $%8.4f\n",(float)subTotal / 100);
    printf("Taxes    : $%8.4f\n",(float)taxes / 100);
    printf("Total    : $%8.4f\n",(float)total / 100);


    return 0;
}


