// Example 4: Using Union to Save Memory
// Unions are useful when you need to save memory. For instance:
#include <stdio.h>

union Data 
{
    int i;  // 4 bytes
    float f; // 4 bytes
};

int main() 
{
    union Data data;
    
    data.i = 10;
    printf("Data.i: %d\n", data.i);
    
    data.f = 220.5;
    printf("Data.f: %.2f\n", data.f);
    
    return 0;
}
/*
Memory Usage:
If it were a struct, it would take 4 bytes (for i) + 4 bytes (for f) = 8 bytes.
A union takes only 4 bytes because both i and f share the same memory.
*/
