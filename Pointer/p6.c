/*
    Dynamc Memory Allocation ->

    In C -> malloc() calloc() realoc() -> memory alllocation
        -> free() -> release the allocted memory

    In C++  -> new
            -> delete

    JS Java Python...............  -> new 
                                    -> garbage Collector - cycle that run a deallocate the memory


--------------------------------------------------------------------
stdlib.h -> header file

malloc() -> Inbult function in stdlib.h
        -> It dynamically allocate the memory into the heap;
        -> Syntax:
                malloc(size in bytes);
        -> it return the generic or a void pointer.
        -> if suffcient space i not avilable it return NULL Pointer




eg ->
    int a = 10; => size -> 2/4 byte -> stack section

    heap - malloc()    
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr = (int*)malloc(sizeof(int));

   if(ptr == NULL)
   {
        printf("Error allocating the memory!!!!\n");
        return 0;
   }
}