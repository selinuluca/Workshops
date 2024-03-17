#include <stdio.h>

int main()
{
    char tab = '\t';

    printf("\nWorkshop 1 Part-2\n");
    printf("=================\n");
    printf("\nUsing tab specifiers...\n");
    printf("<t>%cTab-1 <t>%cTab-2 <t>%cTab-3\n", tab, tab, tab);
    printf("<t>%c----- <t>%c===== <t>%C-----\n", tab, tab, tab);
    printf("\n\\ this is a back-slash character! \n");
    printf("%% this is a percent sign character! \n");
    printf("\" this is a double-quote character! \n");
    printf("\nMy favorite quotes are:\n");
    printf("1.<t>%c""Skill is only developed by hours and hours of work.""\n",tab);
    printf("<6t>%c%c%c%c%c%c-Usain Bolt\n\n",tab, tab, tab, tab, tab, tab);
    printf("2.<t>%c""It's not about having time. It's about making time.""\n",tab);
    printf("<6t>%c%c%c%c%c%c-unknown\n\n",tab, tab, tab, tab, tab, tab);
    printf("3.<t>%c""All of us do not have equal talent. But, all of us\n<t>\thave an equal opportunity to develop our talents.""\n",tab);
    printf("<6t>%c%c%c%c%c%c-A.P.J Abdul Kalam\n\n\n",tab, tab, tab, tab, tab, tab);

    return 0;
}
