#include <stdio.h>
int main ()
{
    double A, B, C, pi=3.14159, T=0, CIR=0, TRA=0, Q=0, R=0;
    scanf("%lf %lf %lf",&A, &B, &C);
    T= (1/2.0)*A*C;
    CIR= pi*(C*C);
    TRA= ((A+B)/2.0)*C;
    Q= (B*B);
    R= (A*B);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", T, CIR, TRA, Q, R);
    return 0;
}
