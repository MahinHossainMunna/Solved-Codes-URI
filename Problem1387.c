
#include <stdio.h>



int main() {

    int n,m;
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
        int a=0;
        a=n+m;
        printf("%d\n",a);
        scanf("%d%d",&n,&m);
    }

    return 0;
}
