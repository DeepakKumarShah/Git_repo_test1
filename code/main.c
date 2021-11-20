#include <stdio.h> ///<Library for printf and scanf
#include "MACROS.h" ///< Header for custom MACROS.

void main(void) ///< Main function
{
    int r = 0; ///<Radius
    float a = 0; ///<Area

    scanf("%d", &r); ///<Take radius as input from user 
    printf("%lf", (pi*r*r)); ///<Give area as output
}