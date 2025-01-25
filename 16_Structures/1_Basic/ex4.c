// Example 2: Array of structures
#include <stdio.h>
#include <string.h>

struct Person 
{
    char name[50]; // Character array to store the name
    int age;       // Integer to store the age
};

int main() 
{
    struct Person arr[2]; // Array of 2 structures
    
    // Populate the array with names and ages
    for (int i = 0; i < 2; i++) 
    {
        struct Person p1;
        
        // Use sprintf to concatenate the string "vikas" with the value of i
        sprintf(p1.name, "vikas%d", i);
        p1.age = i + 25; // Assign age based on the loop index
        
        arr[i] = p1; // Assign the struct to the array
    }
    
    // Display the content of the array
    for (int i = 0; i < 2; i++) 
    {
        printf("Name: %s, Age: %d\n", arr[i].name, arr[i].age);
    }
    
    return 0;
}
/*
sprintf Usage:
---------------
sprintf(p1.name, "vikas%d", i); 
formats the string "vikas" and appends the value of i to it, creating "vikas0" and "vikas1".
*/

