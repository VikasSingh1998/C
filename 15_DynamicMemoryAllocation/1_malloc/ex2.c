#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int n = 5;

    // Allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));
    
    //malloc will return NULL, if Memory allocation fail.
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Garbage values (memory not initialized)
    printf("Using malloc: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]); // Likely contains garbage values
    }
    printf("\n");

    free(arr);
    return 0;
}


