#include <stdio.h>

int main()
{
    int n, h, m, o;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &h, &m, &o);
        if(h<10) printf("0%d:", h);
        else printf("%d:", h);
        if(m<10) printf("0%d", m);
        else printf("%d", m);
        if(o == 0) printf(" - A porta fechou!\n");
        else printf(" - A porta abriu!\n");
    }
    return 0;
}
