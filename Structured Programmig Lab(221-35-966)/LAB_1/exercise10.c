#include<stdio.h>
int main()
{
    double man_population,women_population,total_literacy,man_literacy,man_iliterate,women_illiterate;
    double population=80000;
    man_population=population*.52;
    women_population=population-man_population;
    total_literacy=population*.48;
    man_literacy=population*.35;
    man_iliterate=man_population-man_literacy;
    women_illiterate=women_population-(total_literacy-man_literacy);
    printf("men illiterate: %.2lf\n",man_iliterate);
    printf("women illiterate: %.2lf\n",women_illiterate);
    return 0;

}