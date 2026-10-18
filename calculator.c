#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int choice;
    float a,b,result;
    while(1)
    {
        printf("\n**** SCIENTIFIC CALCULATOR ****");
        printf("\nEnter 0:For exit");
        printf("\nEnter 1:For Addition");
        printf("\nEnter 2:For Substraction");
        printf("\nEnter 3:For Multiplication");
        printf("\nEnter 4:For Division");
        printf("\nEnter 5:To find Square root");
        printf("\nEnter 6:For sin(x)");
        printf("\nEnter 7:For cos(x)");
        printf("\nEnter 8:For tan(x)");
        printf("\nEnter 9:For cot(x)");
        printf("\nEnter 10:For sec(x)");
        printf("\nEnter 11:For cosec(x)");
        printf("\nEnter 12:For log10(x)");
        printf("\nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {

        case 0:
                exit(1);
                break;
        case 1:
                printf("\nEnter two value ");
                scanf("%f%f",&a,&b);
                result=a+b;
                printf("\nSum = %f",result);
                break;
        case 2:
                printf("\nEnter two value ");
                scanf("%f%f",&a,&b);
                result=a-b;
                printf("\nSubtraction = %f",result);
                break;
        case 3:
                printf("\nEnter two value ");
                scanf("%f%f",&a,&b);
                result=a*b;
                printf("\nMultiplication = %f",result);
                break;
        case 4:
                printf("\nEnter two value ");
                scanf("%f%f",&a,&b);
                result=a/b;
                printf("\nDivision = %f",result);
                break;
        case 5:
                printf("\nEnter a value to find square root ");
                scanf("%f",&a);
                result=sqrt(a);
                printf("\nsquare root = %f",result);
                break;
        case 6:
                printf("\nEnter a degree ");
                scanf("%f",&a);
                result=sin(a);
                printf("\nSin value %f",result);
                break;
        case 7:
                printf("\nEnter a degree ");
                scanf("%f",&a);
                result=cos(a);
                printf("\nCos value %f",result);
                break;
         case 8:
                printf("\nEnter a degree ");
                scanf("%f",&a);
                result=tan(a);
                printf("\nTan value %f",result);
                break;
           case 9:
                printf("\nEnter a degree ");
                scanf("%f",&a);
                result=1/tan(a);
                printf("\nCot value %f",result);
                break;
            case 10:
                    printf("\nEnter a degree ");
                    scanf("%f",&a);
                    result=1/cos(a);
                    printf("\nSec value %f",result);
                    break;
             case 11:
                    printf("\nEnter a degree ");
                    scanf("%f",&a);
                    result=1/sin(a);
                    printf("\nCosec value %f",result);
                    break;
             case 12:
                    printf("\nEnter a value: ");
                    scanf("%f",&a);
                    result=log10(a);
                    printf("\nlog value %f",result);
             default:
                    break;
        }
    }
    return 0;
}