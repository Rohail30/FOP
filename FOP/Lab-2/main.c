#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Take an integer input n and print n, its square (n2) and its cube (n3).
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    printf("\n");
    printf("Square of number is: %d\n",n*n);
    printf("Cube of number is: %d\n",n*n*n);
    printf("\n");

    //Calculate and print the surface area and volume for a box with dimensions (length, width, and height) entered by the user
    int l,w,h;
    printf("Enter Length, Width, Height of a box\n");
    scanf("%d%d%d",&l,&w,&h);
    printf("\n");
    printf("Surface area: %d\n",(2*l*w+2*l*h+2*h*w));
    printf("Volume: %d",(l*w*h));
    printf("\n");


    //Program to convert temperature from Celsius to Fahrenheit
    float C,F;
    printf("Enter Temperature in Celsius\n");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("\n");
    printf("Temperature in Fahrenheit: %f\n",F);




    return 0;
}
