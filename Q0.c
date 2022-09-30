/* CS261- Assignment 1A - Question 0
   Name: Dillon Baldwin  
   Date: September 26, 2022
   Solution description:
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fooA(int* iptr)
{
  
     printf("Value of pointer; %d\n", *int);
     printf("Address of pointer: %p\n", int);
     // Print the value and address of the integer pointed to by iptr
     int + 5;
     // Increment the value of the integer pointed to by iptr by 5
     printf("Address of pointer: %p\n", &iptr);     
     // Print the address of iptr itself
}


void fooB(int* jptr)
{
     printf("Value of pointer; %d\n", *int);
     printf("Address of pointer: %p\n", int);
     // Print the value and address of the integer pointed to by jptr
     jptr--;
     // Decrement jptr by 1
     printf("Address of pointer: %p\n", jptr);
     // Print the address of jptr itself
}


int main()
{
    
    int x = rand() % 11;
    // Declare an integer x and initialize it randomly to a value in [0,10]
    
    printf("Value of x; %d\n", x);
    printf("Address of x: %p\n", &x);
     // Print the value and address of x
    
    fooA(x);
    // Call fooA() with the address of x
    printf("Value of x: %d\n", x);
    // Print the value of x
    //The value is different because the integer changes randomly in the main function because we are using a random int between 1-10
    fooB(x);
    // Call fooB() with the address of x
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", x);
    // Print the value and address of x
    //The value and address are different in the main function because we are using a random integer of x each time instead..
    //..of the same integer that is used within the functions
    
    return 0;
}


