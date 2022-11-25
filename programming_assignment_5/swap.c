#include <stdio.h>

void swap ( int * x, int * y ); // prototype
                                //  x and y have prototype scope

int main (void) {

    int a = 3, b = 9;
    swap( &a, &b );
    printf("a = %d  b = %d\n", a, b);

} // end main

void swap ( int * x, int * y ) {

     int temp = *x;
     *x = *y;
     *y = temp;

}

