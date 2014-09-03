#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter integer: ");
    scanf("%d",&a);
    printf("select output base [8 or 16]: ");
    scanf("%d",&b);
    if(b==8)
    {
        printf("%o\n",a);
    }
    if(b==16)
    {
        printf("%x\n",a);
    }
    if(b!=8&&b!=16)
    {
        printf("Error\n");
    }
    system("pause");
    return 0;
}
