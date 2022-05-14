#include<stdio.h>
int main()
{
    double x,y,z,c,d;
    scanf("%lf%lf%lf",&x,&y,&z);
    c=x+y+z;
    d=0.5*(x+y)*z;
    if(x+y>z && y+z>x && z+x>y)
        printf("Perimetro = %.1lf\n",c);
    else
        printf("Area = %.1lf\n",d);
    return 0;

}
