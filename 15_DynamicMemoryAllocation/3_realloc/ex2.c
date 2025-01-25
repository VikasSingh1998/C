#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Initial allocation
    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign initial values
    for (int i = 0; i < 3; i++) 
    {
        arr[i] = i + 1;
    }

    // Resize memory to hold 5 integers
    arr = (int *)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) 
    {
        printf("Reallocation failed\n");
        return 1;
    }

    // Assign values to new memory
    for (int i = 3; i < 5; i++) 
    {
        arr[i] = i + 1;
    }

    // Print all elements
    printf("Array after realloc: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);
    return 0;
}
/*
Array after realloc: 1 2 3 4 5 
*/

