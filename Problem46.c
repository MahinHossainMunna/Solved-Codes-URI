#include <stdio.h>
int main ()
{
    int s,e,r=0;
    scanf("%d%d",&s,&e);
    r=e-s;
    if(r<0)
    {
        printf("O JOGO DUROU %d HORA(S)\n",24+r);
    }
    else if(r==0)
    {
         printf("O JOGO DUROU %d HORA(S)\n",24);
    }
    else
    {
         printf("O JOGO DUROU %d HORA(S)\n",r);
    }
    return 0;
}
