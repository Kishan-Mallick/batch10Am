/*
    NULL pointer -> A pointer whos points to NULL rather than pointing to a valid pointer.

    int *ptr = NULL;

    Wild Pointer -> A pointer which is not even pointing to null and even not pointing to a valid address..

    A pointer which is just declaed.

    int *ptr;

    Dangling Pointer -> A pointer eho points to a valid address but have lost the memory or hve been freed.

    free()

    void pointer -> A pointer which can hold any type of data and can be typecasted. It is also known as generic pointer.

    int a = 10;
    void *ptr = &a; 

    Function Pointer -> a pointer which hold address of the function is known as function pointer

    syntax:
        returnType (*pointerName) (arg1...) = address;
*/

#include<stdio.h>

int fun()
{
    printf("Hello, Good Morning!!!!\n");

    return 32;
}

int main()
{

    int (*fptr)() = fun;

    fun();

    fptr();

    
    return 0;
}