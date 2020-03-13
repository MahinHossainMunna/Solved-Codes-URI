#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
int main ()
{
    int i, n;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(s);
        if(i!=0)
        printf("I am Toorg!\n");
    }
    return 0;

}
