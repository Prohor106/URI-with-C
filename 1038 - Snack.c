#include<stdio.h>
int main()
{
    int x,y;
    double z;
    scanf("%d%d",&x,&y);
    if(x==1)
        z=y*4.00;
    if(x==2)
        z=y*4.50;
     if(x==3)
        z=y*5.00;
     if(x==4)
        z=y*2.00;
     if(x==5)
        z=y*1.50;
    printf("Total: R$ %.2lf\n",z);
    return 0;
}
