/* CS261- Assignment 1A - Question 1
   Name:Dillon Baldwin
   Date:September 28
   Solution description:
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct student
{
	int id;
	int score;
};

struct student* allocate()
{
     myPtr = (student *) malloc(11);
     // Allocate memory for ten students*/
     return(&myPtr);
     // Return the pointer*/
}

void generate(struct student* students)
{
     int* getRandom()
     /* Generate random and unique IDs and random scores for ten students, 
		IDs being between 1 and 10, scores between 0 and 100 */
     
}

void output(struct student* students)
{
     /* Output information about the ten students in the format:
        ID1 Score1
        ID2 score2
        ID3 score3
        ...
        ID10 score10*/
}

void summary(struct student* students)
{
     /* Compute and print the minimum, maximum and average scores of the 
		ten students */
     
}

void deallocate(struct student* stud)
{
     // Deallocate memory from stud
}

int main()
{
    struct student* stud = NULL;
    
    // Call allocate
    
    // Call generate
    
    // Call output
    
    // Call summary
    
    // Call deallocate

    return 0;
}

