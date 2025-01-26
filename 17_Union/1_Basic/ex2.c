#include <stdio.h>
#include <string.h>

union Data 
{
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10; // Assign an integer
    printf("Data.i: %d\n", data.i); // Output: Data.i: 10
    
    data.f = 220.5; // Assign a float, overwrites 'i'
    printf("Data.f: %.2f\n", data.f); // Output: Data.f: 220.50
    
    // data.str = "vikas";//Error
    strcpy(data.str,"vikas");
    printf("String value is: %s",data.str);
    
    return 0;
}

