#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a program to design a calculator that performs all the arithmetic
    //operations (by Switch case)

    int num, num1, num2;
    printf("Enter Two Numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Enter number from menu to perform operation\n");
    printf("[1]To Add\n");
    printf("[2]To Subtract\n");
    printf("[3]To Multiply\n");
    printf("[4]To Divide\n");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        {
           printf("Sum is: %d\n",num1+num2);
           break;
        }
    case 2:
        {
           printf("Difference is: %d\n",num1-num2);
           break;
        }
    case 3:
        {
           printf("Product is: %d\n",num1*num2);
           break;
        }
    case 4:
        {
           printf("Ratio is: %d\n",num1/num2);
           break;
        }
    default :
        {
            printf("Invalid Input");
        }
    }


    return 0;
}
