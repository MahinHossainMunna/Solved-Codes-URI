#include<stdio.h>
int main()
{
      int t,s[10000],i,j,m,jh;
      while(scanf("%d",&t)==1){
            m=0;
            jh=0;
            if(t==0)
            break;
                  for(i=0;i<t;i++){
                        scanf("%d",&s[i]);
                  }
                  for(j=0;j<t;j++){
                        if(s[j]==0)
                        m++;
                  else
                  jh++;
                  }
            printf("Mary won %d times and John won %d times\n",m,jh);
      }
      return 0;
}
