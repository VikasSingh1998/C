free() – Freeing Dynamically Allocated Memory
-----------------------------------------------
The free() function in C is used to deallocate memory that was previously allocated by malloc(), calloc(), or realloc(). 
This is essential to avoid memory leaks by returning the allocated memory to the heap for reuse.

Syntax:
  void free(void *ptr);
ptr: A pointer to the memory block that you want to deallocate. 
     This pointer must point to a memory block that was allocated dynamically (using malloc(), calloc(), or realloc()).
free() does not return anything, and after calling it, the pointer becomes dangling (it no longer points to valid memory).

What Happens Internally?
--------------------------
When you call free() on a pointer, the following occurs:
Deallocation: 
    The memory block that the pointer points to is deallocated. 
    This means the memory is marked as free and available for reuse by the system.
  
Pointer Invalidity: 
    After calling free(), the pointer ptr becomes dangling (i.e., it no longer points to a valid memory address). 
    Using this pointer after freeing it leads to undefined behavior.
--------------------------------------------------------------------------------------------------------------------------------
Notes:
  
After calling free(), the memory is deallocated, and you should not use the pointer anymore. 
It is a good practice to set the pointer to NULL after freeing the memory:

free(ptr);
ptr = NULL;
-----------------
Freeing Non-dynamically Allocated Memory:
Never call free() on memory that wasn’t allocated by malloc(), calloc(), or realloc(). 
For example, trying to free stack variables or static memory can lead to undefined behavior.
---------------------------------------------------------------------------------------------------------------------------------
free(): Used to deallocate memory previously allocated by malloc(), calloc(), or realloc().
Never use a freed pointer: Set it to NULL to avoid accidental access.
Always pair malloc()/calloc()/realloc() with free() to prevent memory leaks.

===================================================================================================================================
