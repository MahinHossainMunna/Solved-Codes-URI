#include <stdio.h>
int main ()
{
   float m;
   scanf("%f",&m);

    if (m<0 || m>100)
    printf("Fora de intervalo\n");

    else if (m>=0 && m<=25)
        printf("Intervalo [0,25]\n");
    else if (m>25 && m<=50)
        printf("Intervalo (25,50]\n");
    else if (m>50 && m<=75)
         printf("Intervalo (50,75]\n");
    else
        printf("Intervalo (75,100]\n");
    return 0;
}
