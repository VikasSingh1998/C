// Example 1: Basic structure
#include <stdio.h>
#include <string.h>

struct Person 
{
    char name[50];
    int age;
};

int main() 
{
    struct Person p1;
    /*
    p1.name = "vikas"; ==> Error
    In C, you cannot directly assign a string literal to a character array using the = operator. 
    Instead, you need to use the strcpy() function from <string.h> to copy the string into the array.
    */
    // Use strcpy to assign a string to the name array
    strcpy(p1.name, "vikas");
    p1.age = 20;
    
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
/*
Name: Vikas, Age: 20
*/

