#include <stdio.h>
	#include <math.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=2;i<=a;i=i+2)
    {
    	b=pow(i,2);
    	printf("%d^2 = %d\n",i,b);
    	}
    	return 0;
    	}
