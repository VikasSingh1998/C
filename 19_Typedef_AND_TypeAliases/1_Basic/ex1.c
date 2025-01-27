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
Common Interview Questions:
============================
Q: What does typedef do?
==> It creates an alias for an existing type, making the code cleaner and easier to read.
 
Q: Can you create a new type using typedef?
==> No, typedef does not create a new type. It only creates an alias for an existing type.

Q: Why would you use typedef for function pointers?
==> Function pointers have a complex syntax, and typedef simplifies their usage by creating a clear alias.

Q: What is the difference between typedef and #define for type aliasing?
==> typedef is interpreted by the compiler, while #define is a preprocessor directive. 
    typedef is preferred because it provides type safety and better debugging support.

=================================================================================================







