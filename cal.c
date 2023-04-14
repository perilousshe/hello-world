#include<stdio.h>
void main()
{
    float a,b;
    int choice;
    printf("1.addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter a:\n");
    scanf("%f",&a);
    printf("Enter b:\n");
    scanf("%f",&b);
    printf("Enter your choice :\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("Sum is : %f",a+b);
            break;
        }
         case 2:
        {
            printf("Subtraction is : %f",a-b);
            break;
        }
         case 3:
        {
            printf("Multiplication  is : %f",a*b);
            break;
        }
         case 4:
        {
            printf("Division is : %f",a/b);
            break;
        }
         default:
        {
            printf("INVALID CHOICE !");
            break;
        }
    }
}
