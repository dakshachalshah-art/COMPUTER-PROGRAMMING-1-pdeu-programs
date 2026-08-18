#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter bytes: ");
    scanf("%d",&a);
    b = a/1024;
    c = a/1048576;
    d = a /1073741824;
    printf("%D bytes = %d KB\n",a,b);
    printf("%d buytes = %d MB\n",a,c);
    printf("%d bytes = %d GB\n",d);

}
