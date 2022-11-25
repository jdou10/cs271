


#include <stdio.h>
#include <time.h>

void fillInteger(int a[], int length, int min, int max){
    for(int i=0;i<length;i++){
    a[i]=rand()%max+min; //rand() function is used to generate random numbers between min and max
    }
}

void fillCharacter(char c[], int length, char start, char end){
int min, max;
min=start-'a'; //used to convert start to its ascii equivalent
max=end-'a'+1; //used to convert start to its ascii equivalent
  
char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }; //array to store alphabets and generate the random alphabets later
  
for(int i=0;i<length;i++)
{
c[i]=alphabet[rand()%max+min]; //rand() function is used to generate random characters from alphabet array between start and end
}
}

void findConsecutive(int array[], int length)
{
//Printing the Integer array elements
printf("\nElements of Integer array are:\n");
for(int i=0;i<length;i++)
{
printf("%d ",array[i]);
}
printf("\n");
  
for(int i=0;i<length-1;i++)
{
if(array[i]+1==array[i+1]) //Comparing current ([i]th) element + 1 to next ([i+1]th) element to see if they are consecutives
{
printf("Elements [%d] and [%d] are consecutive\n", i, i+1); //If true, printing the output
}
}
}

void findTriples(char c[], int length)
{
//Printing the Character array elements
printf("\nElements of Character array are:\n");
for(int i=0;i<length;i++)
{
printf("%c ",c[i]);
}
printf("\n");

for(int i=0;i<length-2;i++)
{
if((c[i]+1==c[i+1]) && (c[i]+2==c[i+2])) //Comparing three consecutive elements to see if they are in alphabetic sequence
{
printf("%c%c%c\n", c[i], c[i+1],c[i+2]); //If true, printing the output
}
}
}

int main(void) {
  
   srand(time(NULL)); //To make sure that, rand produces random numbers on every call
  
   int lengthIntegers, lengthCharacters;
   scanf("%d %d", &lengthIntegers, &lengthCharacters); //Taking input of length of Integer Array and length of Character Array
  
   int a[lengthIntegers];
   char c[lengthCharacters];
  
   int min, max;
   scanf("%d %d", &min, &max); //Taking input of min and max of Integer Array
  
   char start, end;
   scanf(" %c %c", &start, &end); //Taking input of start and end of Character Array
  
   //Calling the functions
  
   fillInteger(a,lengthIntegers,min,max);
   fillCharacter(c,lengthCharacters,start,end);
   findConsecutive(a,lengthIntegers);
   findTriples(c,lengthCharacters);
   return 0;
}
