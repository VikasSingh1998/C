What is a Union in C?
ans ==> 
==> A union in C is a special data type that allows storing different types of data in the same memory location. 
==> Unlike a structure (struct), where each member has its own memory, """"all members of a union share the same memory space""". 
==> This means that at any given time, only one of the members can hold a value.
-------------------------------------------------------------------------------------------------------------
Key Features of Unions
----------------------
Memory Sharing:
==> All members of a union share the same memory. The size of the union is determined by the size of its largest member.

One Active Member:
==> Only one member can store a value at a time. If you assign a value to one member, the previous value (if any) stored in the union is overwritten.
--------------------------------------------------------------------------------------------------------------
Union Syntax
-------------
union UnionName 
{
    dataType1 member1;
    dataType2 member2;
    // more members
};

Example:
--------
union Data 
{
    int i;         // Integer member
    float f;       // Float member
    char str[20];  // String member
};
