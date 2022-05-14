#include<stdio.h>
int main()
{
char name[30];
double sa,sell,TOTAL;
scanf("%s",name);
scanf("%lf%lf",&sa,&sell);
TOTAL=sa+(sell*15)/100;
printf("TOTAL = R$ %.2lf\n",TOTAL);
     return 0;
}
