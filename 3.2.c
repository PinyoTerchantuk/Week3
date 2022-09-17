#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Number\n",a);
printf("Enter Number\n",b);
printf("Enter Number\n",c);
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);




    if(b>a && c>a)
    {
        printf("a");
    }
    else if(a>b && c>b)
    {
        printf("b");
    }
    else if (a>c && b>c)
{
    printf("c");
}
}
