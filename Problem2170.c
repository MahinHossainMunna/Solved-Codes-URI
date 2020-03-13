#include<stdio.h>
int main ()
{
    double X,Y;
    int i=1;
    while(scanf("%lf%lf",&X,&Y)==2)
    {
        double s,p;
        if(X==EOF || Y== EOF)
        {
            break;
        }
        else
        {
        s=Y-X;
        p=(s*100)/X*1.00;
        printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %%\n\n",i,p);
        i++;
        }
    }
    return 0;
}
