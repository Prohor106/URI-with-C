#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
   double b,c,SALARY;
   scanf("%lf %lf",&b,&c);
   SALARY=b*c;
   printf("NUMBER = %d\n",a);
   printf("SALARY = U$ %.2lf\n",SALARY);
     return 0;
}
