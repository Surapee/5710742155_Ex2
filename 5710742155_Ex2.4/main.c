#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,b[3],a,c,d,x,y,z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>z)
    {
        if(y>z)
        {
            printf("%d %d %d\n",x,y,z);
        }
        if(z>y)
        {
            printf("%d %d %d\n",x,z,y);
        }
    }
    if(y>x&&y>z)
    {
        if(x>z)
        {
            printf("%d %d %d\n",y,x,z);
        }
        if(z>x)
        {
            printf("%d %d %d\n",y,z,x);
        }
    }
    if(z>x&&z>y)
    {
        if(x>y)
        {
            printf("%d %d %d\n",z,x,y);
        }
        if(y>x)
        {
            printf("%d %d %d\n",z,y,x);
        }
    }
    system("pause");
    return 0;
}
