#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 * Return: nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}
