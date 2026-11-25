/*
    It very very important topic...... DSA Topic -> DMA -> indepth

    variable -> A varible is container that stores a data
            -> A variable is another nae for memory allocation
            -> memory

            Address -> Hexadecimal -> %p

            Syntax:
                datatype variablename = value;

    Pointer -> A special variable that store the address of another variable.
            Syntax:

                datatype *pointerName = value;

Choose same datatype whose address is being stored.

derefernce operator -> (*) -> Us address pe rakhi hui pe value

reference -> address

-----------------------------------------

double pointer -> pointer of pointer

it is a special pointer that store the address of another pointer.

Artmatic operation pointer
Type of pointer
DMA -> linked list -> Binary tree -> Dynamic array STL -> vectors

templates
STL
    
*/

#include<stdio.h>
int main()
{
    int a = 10;
    printf("Value of a : %d\n",a); //value
    printf("Address of a : %p\n",&a); // address

    int *ptr = &a;

    printf("Value of ptr : %p\n",ptr); //value
    printf("Address of ptr : %p\n",&ptr); //address

    //ptr -> value of ptr -> address of a -> defrence -> we get value of a

    printf("value of a using ptr : %d\n",*ptr);

    *ptr = 50;

    printf("Value of a : %d\n",a); //value

    int **pt = &ptr;

    printf("Value of pt : %p\n",pt);
    printf("Address of pt : %p\n",&pt);

    printf("value of a using pt : %d\n",**pt);

    //pt -> value of pt -> address of ptr -> dereffernce -> ptr ke address pe kya rakha 

    int ***p = &pt;

    printf("value of p : %p\n",p);
    printf("Address of p : %p\n",&p);


    printf("%d\n",***p);

    ***p = 100;

    printf("Value of a : %d\n",a); //value
    
    return 0;
}