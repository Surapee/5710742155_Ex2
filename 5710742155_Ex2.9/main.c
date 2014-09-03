#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Enter coordinate x y: ");
    scanf("%f %f",&x,&y);
    if(x==0&&y==0)
    {
        printf("Origin\n");
    }
    if((x>=0&&y>=0)&&(x!=0&&y!=0))
    {
        printf("Q1\n");
    }
    if(x>=0&&y<0)
    {
        printf("Q4\n");
    }
    if(x<0&&y>=0)
    {
        printf("Q2\n");
    }
    if(x<0&&y<0)
    {
        printf("Q3\n");
    }
    system("pause");
    return 0;
}
