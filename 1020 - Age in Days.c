#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,q,w;
    scanf("%d",&a);
    b= a/365;
    c = (a%365)/30;
    w = (a%365)%30;
    printf("%d ano(s)\n",b);
      printf("%d mes(es)\n",c);
        printf("%d dia(s)\n",w);
    return 0;
}
