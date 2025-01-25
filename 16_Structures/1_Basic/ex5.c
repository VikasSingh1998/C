// Example 3: Nested structure
#include <stdio.h>

struct Address 
{
    char district[50];
    char village[50];
};

struct Person 
{
    char name[50];
    struct Address address;
};

int main() 
{
    struct Person p1 = {"Alice", {"Nashik", "Ghoti"}};
    printf("Name: %s, District: %s, Village: %s\n", p1.name, p1.address.district, p1.address.village);
    return 0;
}
/*
Name: Alice, District: Nashik, Village: Ghoti
*/
