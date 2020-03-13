#include<stdio.h>
#include<math.h>
int main ()
{
    int v,t,x=0;
    while((scanf("%d%d",&v,&t))!=EOF)
    {
        x=2*v*t;
        printf("%d\n",x);
    }
    return 0;
}
