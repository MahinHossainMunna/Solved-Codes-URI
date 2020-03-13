#include <stdio.h>
int main ()
{
    float A, B, C,d,R1=0, R2=0;
    scanf("%f%f%f",&A, &B, &C);
    d=B*B-4*A*C;
    if(d<0 || A<=0)
    {
        printf("Impossivel calcular\n");
    }
    else if(d==0)
    {
        R1=R2=(-B/(2*A));
        printf("R1 = %.5f\nR2 = %.5f\n",R1, R2);
    }
    else
    {
        R1= -B/(2*A) + (sqrt(d)/(2*A));
        R2= -B/(2*A) - (sqrt(d)/(2*A));
        printf("R1 = %.5f\nR2 = %.5f\n",R1, R2);
    }
    return 0;
}
