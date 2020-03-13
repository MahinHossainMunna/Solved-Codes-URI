#include <stdio.h>
int main ()
{
    char c;
    double salary, a, t=0;
    scanf("%s %lf %lf", &c, &salary, &a);
    t=salary+a*15/100;
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}
