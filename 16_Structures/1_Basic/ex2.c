// Example 1: Basic structure
#include <stdio.h>

struct Person 
{
    char name[50];
    int age;
};

int main() 
{
    struct Person p1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
/*
Name: Alice, Age: 30
*/

