#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf%lf%lf",&a,&b,&c);
    h = 2*a;
    d = (b*b)-(4*a*c);
    e = (-b + sqrt(d))/ (h);
    g = (-b - sqrt(d))/ (h);
    if(h == 0)
    {
        printf("Impossivel calcular\n");

    }
    else if(d>=0)
    {
        printf("R1 = %.5lf\n",e);
        printf("R2 = %.5lf\n",g);
    }
    if(d<0)
    {
        printf("Impossivel calcular\n");

    }
    return 0;
}
