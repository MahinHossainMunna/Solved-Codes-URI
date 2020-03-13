#include <stdio.h>
int main ()
{
    int a,b,c;
    while((scanf("%d%d%d",&a,&b,&c)==3)){
              if(a==b && b==c)
                printf("*\n");
            else if(b==c && a!=b && a!=c)
                printf("A\n");
            else if(a==c && b!=a && b!=c)
                printf("B\n");
            else if(a==b && c!=a && c!=b)
                printf("C\n");
            else
                printf("*\n");
          }
          return 0;
}
