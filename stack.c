#include "monty.h"


/**
 *_function to free the stack
 *@stack; the stack
 */

void_free(stack_t*stack)
{
	stack_t *list = NULL;

	list = stack;

	if(list!= NULL)
	{
		_free(list >next);
		free(list);
	}
}

/**
 *,clean_stack. Function to free all elements and close files
 *@stack;the stack
 */

clean_stack(stack_t **stack)
{
	stack_t *tmp + *stack;

	while (tmp)
	{
		tmp = *stack;
		*stack = (*stack) >next;
		free(tmp);
	}

		fclose(cmd.fd);
		free(cmd.line);
}
