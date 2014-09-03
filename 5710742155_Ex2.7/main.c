#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter score: ");
    scanf("%d",&a);
    if(a>80&&a<=100)
    {
        printf("Grade: A\n");
    }
    if(a>=70&&a<=79)
    {
        printf("Grade: B\n");
    }
    if(a>=60&&a<=69)
    {
        printf("Grade: C\n");
    }
    if(a>=50&&a<=59)
    {
        printf("Grade: D\n");
    }
    if(a>=0&&a<50)
    {
        printf("Grade: F\n");
    }
    if(a<0||a>100)
    {
        printf("Wrong\n");
    }
    system("pause");
    return 0;
}
