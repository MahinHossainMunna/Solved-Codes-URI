#include <stdio.h>
int main()
{
    long long int x,y;
    while (scanf("%lli%lli",&x,&y)!=EOF)
    {
        if(x>=y)
            printf("%lli\n",x-y);
        else
            printf("%lli\n",y-x);
    }
    return 0;
}
