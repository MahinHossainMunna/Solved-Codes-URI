#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int i=0;
    while(i<n)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        if(a%b==0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}
