#include <stdio.h>
int main ()
{
    double pi=3.14159, R, V=0;
    scanf("%lf", &R);
    V=(4/3.0)*pi*(R*R*R);
    printf("VOLUME = %.3lf\n", V);
    return 0;
}
