Dynamic Memory Allocation ==> Dynamic memory allocation is used to allocate the memory at run time.
Static memory allocation ==> static memory allocation is used to allocate the memory at compile time.
--------------------------------------------------------------
In C, dynamic memory allocation is achieved through functions like: malloc(),calloc(),realloc(),free()
=======================================================================================================
1. malloc (Memory Allocation):
----------------------------------
Syntax:
    void* malloc(size_t size);

==> Allocates a block of memory of the specified size in bytes.
==> Returns a void pointer to the beginning of the block or NULL if the allocation fails.
==> Does not initialize memory; contains garbage values.

Example: 
int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers

SO, Here malloc return the void*, so we will type cast to int*.
========================================================================================================











  
