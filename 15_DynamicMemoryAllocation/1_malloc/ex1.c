// Allocate memory using malloc
int* arr = (int*)malloc(n * sizeof(int));
It will crate n block each of size equal to int OR 1 block of size n*sizeof(int)?

Ans ==> 
What happens:
==> malloc() allocates one continuous block of memory of size n * sizeof(int).
==> It does not create n separate blocks but rather one single block that is large enough to store n integers.

Memory Layout:
----------------
If n = 5 and sizeof(int) = 4 bytes (on most systems), then:
==> The allocated memory block is 20 bytes (5 × 4 bytes).
==> The memory is laid out contiguously in a single block:
                   [Block for arr]: [int1][int2][int3][int4][int5] (20 bytes total)
==> The pointer arr points to the first byte of this block.

How does indexing work?
--------------------------
Even though it’s one block of memory, you can treat it like an array using pointer arithmetic:
                      arr[0], arr[1], arr[2], ..., arr[n-1]
  
Here’s why:
When you access arr[i], the compiler computes it as:
                      *(arr + i) = *(base_address + i * sizeof(int))

Key Takeaway:
==> malloc() allocates one single contiguous block of memory of size n * sizeof(type) rather than multiple smaller blocks.


















