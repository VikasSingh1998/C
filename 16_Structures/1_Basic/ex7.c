// Example 5: Returning structure from a function
#include <stdio.h>

struct Person 
{
    char name[50];
    int age;
};

struct Person createPerson(char* name, int age) 
{
    struct Person p;
    snprintf(p.name, sizeof(p.name), "%s", name);
    p.age = age;
    return p;
}

int main() 
{
    struct Person p1 = createPerson("Alice", 30);
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
/*
Name: Alice, Age: 30
*/
