#include <stdio.h>
int main ()
{
    int N, H;
    float A, Salary=0;
    scanf("%d %d %f",&N, &H, &A);
    Salary = H*A;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",N, Salary);
    return 0;
}
