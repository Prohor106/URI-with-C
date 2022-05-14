#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,q,w;
    scanf("%d",&a);
    b= a/3600;
    q = a-(3600*b);
    c = q/60;
    w = q - (60*c);

    printf("%d:%d:%d\n", b, c, w );
    return 0;
}
