Dynamic Memory Allocation ==> Dynamic memory allocation is used to allocate the memory at run time.
Static memory allocation ==> static memory allocation is used to allocate the memory at compile time.
--------------------------------------------------------------
In C, dynamic memory allocation is achieved through functions like: malloc(),calloc(),realloc(),free()
=======================================================================================================
1. malloc() ==> Memory Allocation
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
2. calloc() ==> Contiguous Allocation
---------------------------------------
Syntax:
void* calloc(size_t num, size_t size);
num ==> number of element 
size ==> size of element.

==> Allocates memory for an array of elements and initializes them to zero.
==> Returns a pointer to the beginning of the allocated memory.
==> It initialize the memory with 0.

Example:
    int *ptr = (int *)calloc(5, sizeof(int)); // Allocates memory for 5 integers and initializes them to 0

Since calloc() return the void*, so we have to typecast to int*.
========================================================================================================
Q: While both malloc() and calloc() are used for dynamic memory allocation in C, there are some key differences between them?
Ans ==> 

    Feature	                     malloc()	                                                                calloc()
Purpose	               Allocates a single block of memory.	                                    Allocates memory for an array of elements.
Initialization	       Does not initialize the allocated memory (contains garbage values).	    Initializes all allocated memory to 0.
Syntax	               void* malloc(size_t size)	                                            void* calloc(size_t num, size_t size)
Arguments	           Takes a single argument: total size in bytes.	                        Takes two arguments: number of elements and size of each element.
Performance	           Slightly faster as it doesn’t initialize memory.	                        Slightly slower due to initialization overhead.

===========================================================================================================================



































    









  
