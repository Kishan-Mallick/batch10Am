/*
    Variable -> value store -> variable name -> Address.
    datatype variableName = value;


    Pointer are the special variable that store the address of another variable.

    Use same datatype whose address is stored.

    Syntax:
        datatype *pointerName = value;

        & -> address of sign

--------------------------------------------------------

Double Pointer -> Pointer to Pointer

It is a special pointer that store the address of another pointer.

*/

#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    int **pt = &ptr;

    printf("Value of a : %d\n",a);
    printf("Address of a : %p\n",&a);

    printf("Value of ptr : %p\n",ptr);
    printf("Address of ptr : %p\n",&ptr);

    //Dereferance Opertor (*)

    printf("Value of a using ptr : %d\n",*ptr);

    printf("Value of pt : %p\n",pt);
    printf("Address of pt : %p\n",&pt);

    **pt = 100;
    printf("Value of a : %d\n",a);

    printf("Value of a : %d\n",**pt);

    return 0;
}