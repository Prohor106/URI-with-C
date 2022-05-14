#include <stdio.h>
#include <math.h>
int main()
{
    double n,i,sum=0;
    int count=0;
    for(i=1; i<7; i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            sum=sum+n;
            count++;
        }
    }

    printf("%d valores positivos\n",count);
    printf("%.1lf\n",sum/count);
    return 0;
}
