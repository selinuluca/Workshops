/*
*****************************************************************************
                          Workshop - #3 (P1)

*****************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // You must use this variable in #3 data analysis section!
    const double test_value = 330.99;

    const int p1_id = 111, p2_id = 222, p3_id = 111;
    const char p1_taxed = 'Y', p2_taxed = 'N', p3_taxed = 'N';
    const float p1_price = 111.49, p2_price = 222.99, p3_price = 334.49;
    const float average = (p1_price + p2_price + p3_price) / 3;



    printf("\n\nProduct Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", p1_id);
    printf("  Taxed: %c\n", p1_taxed);
    printf("  Price: %.4f\n\n", p1_price);
    printf("Product-2 (ID:%d)\n", p2_id);
    printf("  Taxed: %c\n", p2_taxed);
    printf("  Price: %.4f\n\n", p2_price);
    printf("Product-3 (ID:%d)\n", p3_id);
    printf("  Taxed: %c\n", p3_taxed);
    printf("  Price: %.4f\n\n", p3_price);
    printf("The average of all prices is: $%.4f\n\n", average);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");

    printf("1. Is product 1 taxable? -> ");
    if(p1_taxed == 'Y')
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("2. Are products 2 and 3 both NOT taxable (N)? -> ");
    if(p2_taxed == 'N' && p3_taxed == 'N')
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("3. Is product 3 less than test_value ($%.2f)? -> ", test_value);
    if(p3_price < test_value)
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> ");
    if(p3_price > (p2_price + p1_price))
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? -> ");
    if(p1_price >= (p3_price - p2_price))
        printf("1 ");
    else
        printf("0 ");
    printf("(price difference: $%.2f)\n\n", p3_price - p2_price);

    printf("6. Is the price of product 2 equal to or more than the average price? -> ");
    if(p2_price >= average)
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("7. Based on product ID, product 1 is unique -> ");
    if(p1_id != p2_id && p1_id != p3_id)
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("8. Based on product ID, product 2 is unique -> ");
    if(p2_id != p1_id && p2_id != p3_id)
        printf("1\n\n");
    else
        printf("0\n\n");

    printf("9. Based on product ID, product 3 is unique -> ");
    if(p3_id != p1_id && p3_id != p2_id)
        printf("1\n\n");
    else
        printf("0\n\n");

    return 0;
}
