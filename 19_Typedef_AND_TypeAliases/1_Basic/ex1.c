typedef ==> typedef is used in C and C++ to create an alias name for existing data types
---------------------------------------------------------------------------------------------
Example 1:
 typedef unsigned int uint; ==> we can use uint instead of the unsigned int.
--------------------------------------
Example 2:
typedef struct 
{
    char name[50];
    int age;
} Person;

Explanation:
==> typedef eliminates the need to write struct every time you declare a variable of type Person.
Person p = {"Alice", 30};  // Use 'Person' instead of 'struct Person'
  
==> Without typedef
struct Person 
{
    char name[50];
    int age;
};
and declare variables like ==> struct Person p;
-----------------------------------------------------------------------------------------------










