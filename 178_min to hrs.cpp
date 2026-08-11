#include<stdio.h>
int main()
{
    float hrs,minutes;
    printf("enter time in minutes ");
    scanf("%f",&minutes);
    hrs=(minutes/60.0);
    printf("time in hours is=%f\n",hrs);
}
