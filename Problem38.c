#include <stdio.h>
int main ()
{
    int X, Y;
    float p=0;
    scanf("%d%d",&X,&Y);
    if (X==1)
    {
       p= (4.00*Y);
       printf("Total: R$ %.2f\n",p);
    }
    else if (X==2)
    {
       p= (4.50*Y);
       printf("Total: R$ %.2f\n",p);
    }
    else if (X==3)
    {
       p= (5.00*Y);
       printf("Total: R$ %.2f\n",p);
    }
    else if (X==4)
    {
       p= (2.00*Y);
       printf("Total: R$ %.2f\n",p);
    }
    else if (X==5)
    {
       p= (1.50*Y);
       printf("Total: R$ %.2f\n",p);
    }
    else
    {
        printf ("Input product code between 1 to 5\n");
    }
    return 0;
}
