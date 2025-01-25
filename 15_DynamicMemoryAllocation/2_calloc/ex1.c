calloc()
=========
arr = (int *)calloc(n, sizeof(int));

What happens:
==> calloc() allocates one continuous block of memory of size n * sizeof(int) (just like malloc()).
==> It then initializes all elements of the allocated block to zero (unlike malloc(), which leaves the memory uninitialized).

===============================================================================================================================
Memory Layout:
----------------
If n = 5 and sizeof(int) = 4 bytes (on most systems), the memory block will be 20 bytes (5 × 4 bytes), and each element will be initialized to 0:
         [Block for arr]: [0][0][0][0][0] (20 bytes total)
Each 0 represents an integer (4 bytes), and they are all initialized to 0 by calloc().

How does indexing work?
---------------------------
Just like with malloc(), the allocation is one single contiguous block of memory. You access the elements using array indexing:
         arr[0], arr[1], arr[2], ..., arr[n-1]
Even though calloc() initializes the memory to 0, the pointer arr still points to the first byte of the block, and you can index the array in the same way.

Key Takeaway:
calloc() also allocates one single contiguous block of memory of size n * sizeof(type), but unlike malloc(), it initializes all elements to 0.
==================================================================================================================================================
Q: calloc() also create 1 block only of size n* sizeof(int);
Ans ==>
  Yes, exactly!

Both malloc() and calloc() allocate one single contiguous block of memory. 

The key difference is that:
==> malloc() allocates memory without initializing it (leaves the contents as garbage values).
==> calloc() allocates memory and initializes all the elements to 0.
So, in the case of calloc(n, sizeof(int)), it will allocate one contiguous block of memory large enough to store n integers and initialize all of them to 0.

Summary:
One block of memory is allocated, regardless of whether you use malloc() or calloc().
The difference lies in whether the memory is initialized to 0 (in the case of calloc()) or not (in the case of malloc()).
====================================================================================================================================================

  
