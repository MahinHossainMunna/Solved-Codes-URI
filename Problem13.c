#include <stdio.h>

int main()
{
    int a,b,c,maxab,maior=0;
    scanf("%d %d %d", &a, &b, &c);
    maxab=((a+b+abs(a-b))/2);
    maior=(maxab+c+abs(maxab-c))/2;
    printf("%d eh o maior\n", maior);
    return 0;
}
