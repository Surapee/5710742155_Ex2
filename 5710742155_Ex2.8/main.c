#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e;
    printf("Enter midterm final: ");
    scanf("%f %f",&a,&b);
    e = a+b;
    if(a>=20&&b>=30)
    {
        printf("passed with score %.2f\n",e);
    }
    if(a<20||b<30)
    {
        if(e>=60)
        {
            printf("passed with score %.2f\n",e);
        }
        if(e<60)
        {
            printf("failed with score %.2f\n",e);
        }
    }
    if(a<20&&b<30)
    {
        printf("failed with score %.2f\n",e);
    }
    system("pause");
    return 0;
}
