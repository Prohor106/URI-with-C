#include <stdio.h>
int main()
{
	int n,i,j,k,l,m,z;
	scanf("%d",&n);
	printf("%d\n",n);
	
	printf("%d nota(s) de R$ 100,00\n",n/100);
	i=n%100;
	
	printf("%d nota(s) de R$ 50,00\n",i/50);
	i=i%50;
	
	printf("%d nota(s) de R$ 20,00\n",i/20);
	i=i%20;
	
	printf("%d nota(s) de R$ 10,00\n",i/10);
	i=i%10;
	
	printf("%d nota(s) de R$ 5,00\n",i/5);
	i=i%5;
	
	printf("%d nota(s) de R$ 2,00\n",i/2);
	i=i%2;
	
	printf("%d nota(s) de R$ 1,00\n",i);
	
	return 0;
	}
