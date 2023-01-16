#include<stdio.h>
#include<math.h>
// others
void main()
{
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("absolute value %d is %d\n",n,abs(n));
    //note : absolute value should be int 
    printf("arc cosine %d is %f\n",n,acos(n));
    printf("arc sine %d is %f\n",n,asin(n));
    printf("arc tangent%d is %f\n",n,atan(n));
    printf("cosine of %d is %f\n",n,cos(n));
    printf("Exponent of %d is %f\n",n,exp(n));
    printf("sine of %d is %f\n",n,sin(n));
    printf("tan of %d is %f\n",n,tan(n));


}