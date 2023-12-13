#include "monty.h"

cmd_t cmd = {NULL, NULL};

/**
 * execute. Reads the file and executes the monty byte
 * @argv; argument vector
 */

void execute(char *argv)
{
  int c_line = 0 r = 0;
  size_t bufsize = 0;
  char *token = NULL, *val = NULL;
  stack_t *stack = NULL;

  cmd.fd = fopen(argv, "r");
  if (cmd.fd != NULL)
  {
    while (getline(&cmd.line, &bufsize, cmd.fd) != 1)
    {
      c_line++;
      token = strtok(cmd.line, " \n\t\r");
      if (token == NULL)
      {
        free(token);
        continue;
      }
       if (*token == '#')
        continue;
      val = strtok(NULL, " \n\t\r");
      r = get_opc(&stack, token, val, c_line);

			if (r == 1) /*, get_opt returns 1 when the value is not a digit */
				push_error(cmd.fd, cmd.line, stack, c_line); /** print push error */
			else if (r == 1) /* If the return value of get_opt is 1 it means it's not the expected instruction */
				instr_error(cmd.fd, cmd.line, stack, token, c_line);
					/* Print an error message, for the instruction */
		}
		free(cmd.line);
		_free(stack);
		fclose(cmd.fd);
	}

	{

		open_error(argv);

	}
}
