#include<stdio.h>
int main()
{
double a,b,c,d,e,f,PAGAR;
scanf("%lf%lf%lf",&a,&b,&c);
scanf("%lf%lf%lf",&d,&e,&f);
PAGAR=(b*c)+(e*f);
printf("VALOR A PAGAR: R$ %.2lf\n",PAGAR);
     return 0;
}
