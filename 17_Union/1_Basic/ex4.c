// Example 3: Union with a Struct
#include <stdio.h>

struct Person 
{
    char name[50];
    int age;
};

union Data 
{
    int i;
    struct Person person;
};

int main() 
{
    union Data data;

    data.i = 10; // Assign an integer
    printf("Data.i: %d\n", data.i);

    snprintf(data.person.name, sizeof(data.person.name), "Alice"); // Assign struct values
    data.person.age = 30;
    printf("Name: %s, Age: %d\n", data.person.name, data.person.age);
    
    return 0;
}
/*
Explanation:
The memory for data.i and data.person is shared. Assigning values to data.person overwrites data.i.
*/
