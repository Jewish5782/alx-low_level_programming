#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The string to print.
 * @printFunction: Pointer to the function for printing.
 * Return: Nothing.
 **/
void print_name(char *name, void (*printFunction)(char *))
{
    if (name != NULL && printFunction != NULL)
    {
        printFunction(name);
    }
}
