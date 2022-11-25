// CS 271 - PA 1
// Program name: ball.c
// Jingru Dou
// 4 February 2021


#include <stdio.h>
#define pi 3.1415926535

int main()
{
    // define float variables
    float r, R, V1, V2, V3;
    
    // nenter the variables 1
    printf("Please enter the radius of the inner circle: ");
    scanf("%f", &r);
    
    // enter the variables 2
    printf("Please enter the radius of the outer circle: ");
    scanf("%f", &R);
    
    // r is inner circle radius
    // R is outer circle radius
    
    if (R <= r) {
        printf("Exterior diameter must be larger than interior diameter.\n");
    } // end if
    
    V1 = 4 * pi * R * R * R / 3; 
    V2 = 4 * pi * r * r * r / 3; 
    
    
    printf("The volume of the sphere between two circle is: ");
    
    V3 = V1 - V2;
    printf("%.2f\n", V3);
    
    return 0;
} // end main
    
    
