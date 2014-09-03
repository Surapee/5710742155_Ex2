#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter integer: ");
    scanf("%d",&a);
    if(a>40&&a<=100)
    {
        printf("True.\n");
    }
    else
    {
        printf("False.\n");
    }
    system("pause");
    return 0;
}
