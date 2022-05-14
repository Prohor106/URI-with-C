#include<stdio.h>
int main()
{
    int i,z;
    scanf("%d%d",&i,&z);

    if(z%i==0 || i%z==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}


