#include<stdio.h>
// to find the largest and smallest among three nos.
void main()
{
    int a,b,c;
    printf("Enter the Three no.s \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
           printf("%d is the largest \n",a);
    }
    else if(b>a && b>c)
    {
           printf("%d is the largest \n",b);
    }
    else{
        printf("%d is the largest \n",c);
    }

    if(a<=b && a<=c)
    {
           printf("%d is the Smallest \n",a);
    }
    else if(b<=a && b<=c)
    {
           printf("%d is the Smallest \n",b);
    }
    else{
        printf("%d is the Smallest \n",c);
    }

}
