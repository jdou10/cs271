#include <stdio.h>
int main (void) {
   int line = 1;
   int max = 4;
   while (line <= max) {
       if (line == 1 || line == max) {
           int star = 1;
           while (star <= max) {
                printf("*");
                star++;
           }
           printf("\n");
       }
       else {
           printf("*");
           int star = 1;
           while (star <= max - 2) {
              printf(" ");
              star++;
           }
           printf("*\n");
       }
       line++;
   }
}
