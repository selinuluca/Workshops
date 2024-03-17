/*
*****************************************************************************
                          Workshop - #3 (P2)

*****************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

#define GRAMS_IN_LBS 0.002204

int main()
{
    char dummy = ' ';
    char  c_type1, c_grind_s1, c_cream1;
    char  c_type2, c_grind_s2, c_cream2;
    char  c_type3, c_grind_s3, c_cream3;

    int c_bag_weight1, c_bag_weight2, c_bag_weight3;
    int c_daily_serv;
    char c_strength, c_cream, c_maker;

    float c_temp1, c_temp2, c_temp3;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf("%c", &c_type1);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf("%c", &dummy);
    scanf("%c", &c_grind_s1);

    printf("Bag weight (g): ");
    scanf("%c", &dummy);
    scanf("%d", &c_bag_weight1);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c", &dummy);
    scanf("%c", &c_cream1);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%c", &dummy);
    scanf("%f", &c_temp1);
    printf("\n");

    scanf("%c", &dummy);

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf("%c", &c_type2);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf("%c", &dummy);
    scanf("%c", &c_grind_s2);

    printf("Bag weight (g): ");
    scanf("%c", &dummy);
    scanf("%d", &c_bag_weight2);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c", &dummy);
    scanf("%c", &c_cream2);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%c", &dummy);
    scanf("%f", &c_temp2);
    printf("\n");

    scanf("%c", &dummy);

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf("%c", &c_type3);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf("%c", &dummy);
    scanf("%c", &c_grind_s3);

    printf("Bag weight (g): ");
    scanf("%c", &dummy);
    scanf("%d", &c_bag_weight3);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("%c", &dummy);
    scanf("%c", &c_cream3);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%c", &dummy);
    scanf("%f", &c_temp3);
    scanf("%c", &dummy);

    printf("\n");

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  | Serving      \n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature  \n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");

//id1
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
                                                                        (c_type1 == 'l' || c_type1 == 'L'),
                                                                        (!(c_type1 == 'l' || c_type1 == 'L')),
                                                                        (c_grind_s1 == 'c' || c_grind_s1 == 'C' || c_grind_s1 == 'f' || c_grind_s1 == 'F'),
                                                                        (!(c_grind_s1 == 'c' || c_grind_s1 == 'C' || c_grind_s1 == 'f' || c_grind_s1 == 'F')),
                                                                        (c_bag_weight1),
                                                                        (c_bag_weight1 * GRAMS_IN_LBS),
                                                                        (c_cream1 == 'y' || c_cream1 == 'Y'),
                                                                        (c_temp1),
                                                                        ((9 * c_temp1 / 5 + 32)));

 //id2   
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
                                                                        (c_type2 == 'l' || c_type2 == 'L'),
                                                                        (!(c_type2 == 'l' || c_type2 == 'L')),
                                                                        (c_grind_s2 == 'c' || c_grind_s2 == 'C'),
                                                                        (!(c_grind_s2 == 'c' || c_grind_s2 == 'C')),
                                                                        (c_bag_weight2),
                                                                        (c_bag_weight2 * GRAMS_IN_LBS),
                                                                        (c_cream2 == 'y' || c_cream2 == 'Y'),
                                                                        (c_temp2),
                                                                        ((9 * c_temp2 / 5 + 32)));

//id3
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
                                                                        (c_type3 == 'l' || c_type3 == 'L'),
                                                                        (!(c_type3 == 'l' || c_type3 == 'L')),
                                                                        (c_grind_s3 == 'c' || c_grind_s3 == 'C'),
                                                                        (!(c_grind_s3 == 'c' || c_grind_s3 == 'C')),
                                                                        (c_bag_weight3),
                                                                        (c_bag_weight3 * GRAMS_IN_LBS),
                                                                        (c_cream3 == 'y' || c_cream3 == 'Y'),
                                                                        (c_temp3),
                                                                        ((9 * c_temp3 / 5 + 32)));

    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &dummy);
    printf("%c", &c_strength); //neden printf kullandığımı hatırlayamadım, sonradan bakınca da sebebini anlayamadım.
    c_strength = dummy;

    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf("%c", &dummy);
    scanf("%c", &c_cream);

    printf("Typical number of daily servings: ");
    scanf("%c", &dummy);
    scanf("%d", &c_daily_serv);

    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf("%c", &dummy);
    scanf("%c", &c_maker);
    scanf("%c", &dummy);

    printf("\nThe below table shows how your preferences align to the available products: \n\n");

    printf("------------------+---------------+---------------+-------+--------------\n");
    printf("  |    Coffee     |    Coffee     |   Packaged    | With  |   Serving    \n");
    printf("ID|     Type      |  Grind Size   |  Bag Weight   | Cream | Temperature  \n");
    printf("--+---------------+---------------+---------------+-------+--------------\n");

//id1

    printf(" 1|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type1 == 'l' || c_type1 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type1 == 'b' || c_type1 == 'B'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s1 == 'c' || c_grind_s1 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s1 == 'f' || c_grind_s1 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight1 >= 0 && c_bag_weight1 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight1 == 500) || (c_daily_serv >= 10 && c_bag_weight1 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream1 == 'y' || c_cream1 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream1 == 'n' || c_cream1 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp1 >= 60.0 && c_temp1 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp1 >= 70.0))));

//id2
    printf(" 2|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type2 == 'l' || c_type2 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type2 == 'b' || c_type2 == 'B'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s2 == 'c' || c_grind_s2 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s2 == 'f' || c_grind_s2 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight2 >= 0 && c_bag_weight2 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight2 == 500) || (c_daily_serv >= 10 && c_bag_weight2 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream2 == 'y' || c_cream2 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream2 == 'n' || c_cream2 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp2 >= 60.0 && c_temp2 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp2 >= 70.0))));


//id3
    printf(" 3|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type3 == 'l' || c_type3 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type3 == 'b' || c_type3 == 'B' ))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s3 == 'c' || c_grind_s3 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s3 == 'f' || c_grind_s3 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight3 >= 0 && c_bag_weight3 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight3 == 500) || (c_daily_serv >= 10 && c_bag_weight3 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream3 == 'y' || c_cream3 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream3 == 'n' || c_cream3 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp3 >= 60.0 && c_temp3 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp3 >= 70.0))));


 printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &dummy);
    printf("%c", &c_strength); //neden printf kullandığımı hatırlayamadım, sonradan bakınca da sebebini anlayamadım.
    c_strength = dummy;

    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf("%c", &dummy);
    scanf("%c", &c_cream);

    printf("Typical number of daily servings: ");
    scanf("%c", &dummy);
    scanf("%d", &c_daily_serv);

    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf("%c", &dummy);
    scanf("%c", &c_maker);
    scanf("%c", &dummy);

    printf("\nThe below table shows how your preferences align to the available products: \n\n");

    printf("------------------+---------------+---------------+-------+--------------\n");
    printf("  |    Coffee     |    Coffee     |   Packaged    | With  |   Serving    \n");
    printf("ID|     Type      |  Grind Size   |  Bag Weight   | Cream | Temperature  \n");
    printf("--+---------------+---------------+---------------+-------+--------------\n");

//id1

    printf(" 1|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type1 == 'l' || c_type1 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type1 == 'b' || c_type1 == 'B'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s1 == 'c' || c_grind_s1 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s1 == 'f' || c_grind_s1 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight1 >= 0 && c_bag_weight1 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight1 == 500) || (c_daily_serv >= 10 && c_bag_weight1 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream1 == 'y' || c_cream1 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream1 == 'n' || c_cream1 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp1 >= 60.0 && c_temp1 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp1 >= 70.0))));

//id2
    printf(" 2|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type2 == 'l' || c_type2 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type2 == 'b' || c_type2 == 'B'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s2 == 'c' || c_grind_s2 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s2 == 'f' || c_grind_s2 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight2 >= 0 && c_bag_weight2 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight2 == 500) || (c_daily_serv >= 10 && c_bag_weight2 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream2 == 'y' || c_cream2 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream2 == 'n' || c_cream2 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp2 >= 60.0 && c_temp2 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp2 >= 70.0))));


//id3
    printf(" 3|      %d        |      %d        |      %d        |   %d   |      %d\n",
            (((c_strength == 'm' || c_strength == 'M') && (c_type3 == 'l' || c_type3 == 'L')) || ((c_strength == 'r' || c_strength == 'R') && (c_type3 == 'b' || c_type3 == 'B' ))),
            (((c_maker == 'r' || c_maker == 'R') && (c_grind_s3 == 'c' || c_grind_s3 == 'C')) || ( (c_maker == 'c' || c_maker == 'C') && (c_grind_s3 == 'f' || c_grind_s3 == 'F'))),
            ((c_daily_serv >= 1 && c_daily_serv <= 4 && c_bag_weight3 >= 0 && c_bag_weight3 <= 250) || (c_daily_serv >= 5 && c_daily_serv <= 9 && c_bag_weight3 == 500) || (c_daily_serv >= 10 && c_bag_weight3 == 1000)),
            (((c_cream == 'y' || c_cream == 'Y') && (c_cream3 == 'y' || c_cream3 == 'Y')) || ((c_cream == 'n' || c_cream == 'N') && (c_cream3 == 'n' || c_cream3 == 'N'))),
            (((c_maker == 'r' || c_maker == 'R') && (c_temp3 >= 60.0 && c_temp3 < 70.0)) || ((c_maker == 'c' || c_maker == 'C') && (c_temp3 >= 70.0))));


    printf("\nHope you found a product that suits your likes!\n\n");

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",

As described in step-10
=======================
printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",

*/
