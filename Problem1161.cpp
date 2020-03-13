#include<stdio.h>

main()
{
	long long int i,j,n,m;
	long long int f1,f2;
	f1=f2=1;
	while(scanf("%lld %lld",&n,&m) != EOF){

		for(i=1; i<=n; i++){
			f1=f1 * i;
		}
		for(j=1; j<=m; j++){
			f2=f2 * j;
		}
		long long int sum = f1+f2;
		printf("%lld\n",sum);
		f1=f2=1;

	}


}
