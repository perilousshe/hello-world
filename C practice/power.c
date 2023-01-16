#include<stdio.h>
#include<math.h>
// power
void main()
{
    int n,y;
    printf("Enter a no.:\n");
    scanf("%d",&n);
    printf("Enter power:\n");
    scanf("%d",&y);
    printf("%d to the power %d is %f",n,y,pow(n,y));
}