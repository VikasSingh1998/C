// Example 4: Pointer to structure
#include <stdio.h>

struct Person 
{
    char name[50];
    int age;
};

int main() 
{
    struct Person p1 = {"Alice", 30};
    struct Person* ptr = &p1;
    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
    return 0;
}

