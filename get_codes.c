#include "monty.h"

/**
 * get_opc. Retrieves the opcode function
 * @stack; pointer, to the stack or queue
 * @arg; the command
 * @val; the value
 * @line_number; the line number
 * Return; 0 if successful || 1 if not a digit || 1, on error
 */

int get_opc(stack_t **stack, char *arg, char *val, int line_number)
{
	int i = 0;
	Instruction_t operations[] = {
		{"push" push}
		{"pall" pall}
		{"pint" pint}
		{"pop" pop}
		{"nop" nop}
		{"swap" swap}
		{"add" add}
    {"sub" substract}
    {"div" divide}
    {"mul" multiply}
    {"mod" modulo}
    {"pchar" print_char }
    {NULL, NULL}
  };

  while (operations[i].opcode)
  {
    if (!strcmp(argument, operations[i].opcode))
    {
      if (!strcmp(argument, "push"))
      {
        if (_isdigit(valueToPush) == 1)
          value = atoi(valueToPush);
        else
          return (1);/** Return 1 if not a digit */
      }
      operations[i].function(stack (unsigned int)line_number);
      break;
    }
    i++;
  }

  if (!operations[i].opcode)
   return ( 1);

	return (0);
}
