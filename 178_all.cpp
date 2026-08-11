#include<stdio.h>
int main()
{
     float  a,b,add,sub,mul,divide;
    printf("enter 2 nos,first greater than second ");
    scanf("%f %f",&a,&b);
    sub=a-b;
    add=a+b;
    mul=a*b;
    divide=a/b;
    printf("%f - %f = %f\n",a,b,sub);
    printf("%f + %f = %f\n",a,b,add);
    printf("%f * %f = %f\n",a,b,mul);
    printf("%f / %f = %f\n",a,b,divide);
    return 0;


}
