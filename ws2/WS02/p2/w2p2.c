/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    float shirtS,shirtM, shirtL;

    int sub_total_pat, sub_total_sal, sub_total_tom;
    int taxes_pat, taxes_sal, taxes_tom;
    int total_pat, total_sal, total_tom;
    int patty_num, tommy_num, sally_num;

    int cent_all, cent_tax;

    int penny, nickel, dime, quarter, loonie, toonie ;

    float avr_cost;

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

    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&patty_num);
    printf("\n");

    printf("\nTommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&tommy_num);
    printf("\n");

    printf("\nSally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d",&sally_num);
    printf("\n");

    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    sub_total_pat = patty_num * shirtS * 100 + 0.5;
    sub_total_sal = sally_num * shirtM * 100 + 0.5;
    sub_total_tom = tommy_num * shirtL * 100 + 0.5;

    taxes_pat = patty_num * shirtS * TAX * 100 + 0.5;
    taxes_sal = sally_num * shirtM * TAX * 100 + 0.5;
    taxes_tom = tommy_num * shirtL * TAX * 100 + 0.5;

    total_pat = ((float)sub_total_pat / 100 + (float)taxes_pat / 100) * 100;
    total_sal = ((float)sub_total_sal / 100 + (float)taxes_sal / 100) * 100;
    total_tom = ((float)sub_total_tom / 100 + (float)taxes_tom / 100) * 100;


    printf("Patty    %c    %4.2f   %d  %8.4f   %7.4f  %8.4f\n",patSize, shirtS, patty_num, (float)sub_total_pat / 100,(float)taxes_pat / 100, (float)total_pat / 100);
    printf("Sally    %c    %4.2f   %d  %8.4f   %7.4f  %8.4f\n",salSize, shirtM, sally_num, (float)sub_total_sal / 100,(float)taxes_sal / 100, (float)total_sal / 100);
    printf("Tommy    %c    %4.2f   %d  %8.4f   %7.4f  %8.4f\n",tomSize, shirtL, tommy_num, (float)sub_total_tom / 100,(float)taxes_tom / 100, (float)total_tom / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         %8.4f   %7.4f  %8.4f\n",((float)sub_total_pat / 100 + (float)sub_total_sal / 100 + (float)sub_total_tom / 100), ((float)taxes_pat / 100 + (float)taxes_sal / 100 + (float)taxes_tom / 100), ((float)total_pat / 100 + (float)total_sal / 100 + (float)total_tom / 100));

    printf("\nDaily retail sales represented by coins");
    printf("\n=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %8.4f\n",((float)sub_total_pat / 100 + (float)sub_total_sal / 100 + (float)sub_total_tom / 100));

    cent_all = ((float)sub_total_pat / 100 + (float)sub_total_sal / 100 + (float)sub_total_tom / 100) * 100;

    toonie = cent_all / 200;
    loonie = (cent_all - toonie * 200) / 100;
    quarter = ((cent_all - toonie * 200) - loonie * 100) / 25;
    dime = (((cent_all - toonie * 200) - loonie * 100) - quarter * 25) / 10;
    nickel = ((((cent_all - toonie * 200) - loonie * 100) - quarter * 25) - dime * 10) / 5;
    penny = (((((cent_all - toonie * 200) - loonie * 100) - quarter * 25) - dime * 10) - nickel * 5) / 1;


    printf("Toonies  %d    %6.4f\n", toonie, (float)(cent_all % 200) / 100);
    printf("Loonies    %d    %6.4f\n", loonie, (float)((cent_all % 200) % 100) / 100);
    printf("Quarters   %d    %6.4f\n", quarter, (float)(((cent_all % 200) % 100) % 25 ) / 100);
    printf("Dimes      %d    %6.4f\n", dime, (float)((((cent_all % 200) % 100) % 25 ) % 10) / 100);
    printf("Nickels    %d    %6.4f\n", nickel, (float)(((((cent_all % 200) % 100) % 25 ) % 10) % 5) / 100);
    printf("Pennies    %d    %6.4f\n", penny, (float)((((((cent_all % 200) % 100) % 25 ) % 10) % 5) % 1) / 100 );

    avr_cost= (float)cent_all / (patty_num + tommy_num + sally_num) / 100;

    printf("\nAverage cost/shirt: $%7.4f\n\n", avr_cost);

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");

    cent_tax = ((float)total_pat / 100 + (float)total_sal / 100 + (float)total_tom / 100) * 100;

    printf("              %8.4f\n",(float)cent_tax / 100);

    toonie = cent_tax / 200;
    loonie = (cent_tax - toonie * 200) / 100;
    quarter = ((cent_tax - toonie * 200) - loonie * 100) / 25;
    dime = (((cent_tax - toonie * 200) - loonie * 100) - quarter * 25) / 10;
    nickel = ((((cent_tax - toonie * 200) - loonie * 100) - quarter * 25) - dime * 10) / 5;
    penny = (((((cent_tax - toonie * 200) - loonie * 100) - quarter * 25) - dime * 10) - nickel * 5) / 1;

    printf("Toonies  %d    %6.4f\n", toonie, (float)(cent_tax % 200) / 100);
    printf("Loonies    %d    %6.4f\n", loonie, (float)((cent_tax % 200) % 100) / 100);
    printf("Quarters   %d    %6.4f\n", quarter, (float)(((cent_tax % 200) % 100) % 25 ) / 100);
    printf("Dimes      %d    %6.4f\n", dime, (float)((((cent_tax % 200) % 100) % 25 ) % 10) / 100);
    printf("Nickels    %d    %6.4f\n", nickel, (float)(((((cent_tax % 200) % 100) % 25 ) % 10) % 5) / 100);
    printf("Pennies    %d    %6.4f\n", penny, (float)((((((cent_tax % 200) % 100) % 25 ) % 10) % 5) % 1) / 100 );

    avr_cost= (float)cent_tax / (patty_num + tommy_num + sally_num) / 100;
    printf("\nAverage cost/shirt: $%7.4f\n\n", avr_cost);

    //penny = 1 cent
    //nickel = 5 cent
    //dime = 10 cent
    //quarter = 25 cent
    //loonie = 1 dolar
    //toonie = 2 dolar

    return 0;
}
