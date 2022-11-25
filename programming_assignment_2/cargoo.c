#include <stdio.h>
#include <math.h>
int main (void) {
    float capacity;
    float total=0;
    int count=0;
    float weight;
    
    printf("Please input a Nnumber for ship capacity,the unit is ton.\n");
    scanf("%f",&capacity);
    
    while (capacity >= total) {
        
        //printf("Please input a number for the load,the unit is ton.\n");
        scanf("%f",&weight);
        if (weight > 0) {
            //if (total + weight <= capacity) {
                total = total + weight;
                count++;
           // }
            //else {
               
                
                
            //}
            
        }
        
    }
    printf("The ship is full.\n");
    //printf("capacity %.1f, total %.1f\n", capacity,total);
    printf("Ship's Weight Capacity: %.1f tons\n",capacity);
    printf("%d containers were loaded\n",count);
    printf("Total weight loaded: %.1f tons\n",total);
    
}
    
        
                
            
        
    
    
