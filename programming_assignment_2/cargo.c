// CS 271 - PA 2
// Program name: cargo.c
// Jingru Dou
// 11 February 2021


#include <stdio.h>
#include <math.h>


int main (void) {
    
    float weight, capacity;
    int count = 0;
    float total = 0;
    
    printf("Please enter the total capacity of the ship: ");
    scanf("%f", &capacity);
    
    
    printf("Please enter the weight of shipping containers one at a time: \n");
        while(total <= capacity) {
            scanf("%f", &weight);
            
            if(weight >= 0) {
                total = total + weight;
                count++;
            } // end if
        } // end while
        
        total = total - weight;
        count--;
        
        if(total > capacity) {
            printf("The ship is full.\n");
        } // end if
            
        printf("Ship's Weight Capacity: %.1f tons\n", capacity);
        printf("%d containers were loaded.\n", count);
        printf("Total weight loaded: %d tons\n", total);
        
} // end main
