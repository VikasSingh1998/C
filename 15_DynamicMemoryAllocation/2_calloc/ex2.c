#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int n = 5;

    // Allocate memory using calloc
    arr = (int*)calloc(n, sizeof(int));

    //calloc will return NULL if it fails to allocate the Memory.
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // All values initialized to 0
    printf("Using calloc: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]); // Contains 0
    }
    printf("\n");

    free(arr);
    return 0;
}

