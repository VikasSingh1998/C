// Example 2: Storing Multiple Data Types
#include <stdio.h>

union Data 
{
    int i;
    float f;
    char str[20];
};

int main() 
{
    union Data data;
    
    data.i = 10; // Assign an integer
    printf("Data.i: %d\n", data.i);
    
    data.f = 220.5; // Assign a float, overwrites 'i'
    printf("Data.f: %.2f\n", data.f);
    
    int val = snprintf(data.str, sizeof(data.str), "Hello12345"); // Assign a string
    printf("Data.str: %s\n", data.str); // Overwrites previous value
    printf("the value is: %d",val);
    
    return 0;
}
/*
int snprintf(buffer,sizeof(buffer),"value");
==> It will copy the value into the buffer.
==> Returns the total number of characters (excluding the null-terminator) 
    that would have been written if the buffer were large enough.
*/

