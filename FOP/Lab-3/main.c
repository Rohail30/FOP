#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Write a program to take capital alphabet as input and show the smaller letter on the screen?

    char L,l;
    printf("Enter capital letter: ");
    scanf("%c",&L);
    l = L+32;
    printf("Letter in lower case is: %c",l);
    printf("\n");

    return 0;
}
