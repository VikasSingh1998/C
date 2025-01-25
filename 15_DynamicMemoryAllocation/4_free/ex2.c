#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < n; i++) 
    {
        arr[i] = i + 1; // Store values 1 to 5
    }

    // Print the array
    printf("Array before freeing memory: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    // After calling free, the pointer becomes dangling
    // arr is no longer pointing to valid memory, and using it would be unsafe.
    // If you need to avoid accidental usage, set the pointer to NULL.
    arr = NULL;

    return 0;
}
/*
Array before freeing memory: 1 2 3 4 5 
*/

