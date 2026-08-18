#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf(" Enter principal amount, rate of interest and time period: ");
    scanf("%d%d%d",&a,&b,&c);
    d =(a*b*c)/100.0;
    printf("simple interest = %d\n",d);
}
