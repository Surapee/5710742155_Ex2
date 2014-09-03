#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter integer: ");
    scanf("%d",&a);
    if(a%2==0&&a%3!=0)
    {
        printf("%d is divisible by 2.\n",a);
    }
    if(a%3==0&&a%2!=0)
    {
        printf("%d is divisible by 3.\n",a);
    }
    if(a%2==0&&a%3==0)
    {
        printf("%d is divisible by 2and3.\n",a);
    }
    if(a%2!=0&&a%3!=0)
    {
        printf("%d is not divisible by 02or3.\n",a);
    }
    system("pause");
    return 0;
}
