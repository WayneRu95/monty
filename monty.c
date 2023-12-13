#include "monty.h"
/**
 * The main function serves as the entry point
 * @argc; argument counter
 * @argv; argument vector
 * Return; success or failure
 */
int main(int argc, char **argv)
{

	if (argc != 2)
	{
		 /** Handle the case of usage */

		handleIncorrectUsage();
	}

	{
		/** Read the file and execute the actions */
		executeFile(argv[1]);
	}

	return (EXIT_SUCCESS);

}
