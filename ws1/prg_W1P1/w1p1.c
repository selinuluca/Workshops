#include <stdio.h>


int main()
{
    char first_name[] = "Selin";
    char last_name[] = "Uluca";
    char numara[] = "2222*******";

    printf("\nWorkshop 1 Part-1\n");
    printf("=================\n");
    printf("\nI'm displaying this using the 'printf' stdio\n(standard input output) library function!\n\n");
    printf("Dear teacher,\n\n");
    printf("    I promise I will work hard from this day onward.\n");
    printf("    I acknowledge that practice is extremely important,\n");
    printf("    so I will do all workshops, quizzes, and assignments.\n\n");
    printf("Sincerely,\n\n");
    printf("%s %s \n", first_name, last_name);
    printf("Student ID# %s \n\n", numara);

    return 0;
}
