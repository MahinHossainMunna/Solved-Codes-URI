#include <stdio.h>

int main  ()
{
    float a,r,s=0;
    scanf("%f",&a);
    if(a>=0&&a<=400.00)
    {
        r=a*0.15;
        s=a+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",s,r);
    }
    else if(a>=400.01&&a<=800.00)
    {
        r=a*0.12;
        s=a+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",s,r);
    }
    else if(a>=800.01&&a<=1200.00)
    {
        r=a*0.1;
        s=a+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",s,r);
    }
    else if(a>=1200.01&&a<=2000.00)
    {
        r=a*0.07;
        s=a+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",s,r);
    }
    else if(a>=2000.01)
    {
        r=a*0.04;
        s=a+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",s,r);
    }
    return 0;
}
