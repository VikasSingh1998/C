3. realloc() ==> Reallocate Memory
---------------------------------
Syntax: 
     void* realloc(void* ptr, size_t size);
ptr: A pointer to the previously allocated memory block (can be NULL if reallocating for the first time).
size: The new size of the memory block in bytes.

==> Changes the size of a previously allocated block of memory.
==> Can increase or decrease the memory block.
==> It works on memory that was previously allocated with malloc(), calloc(), or another realloc() call.
==> If the new size is larger, contents of the original memory remain unchanged.

Example: 
    ptr = (int *)realloc(ptr, 10 * sizeof(int)); // Resizes the block for 10 integers
