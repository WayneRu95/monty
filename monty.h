#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

extern int info;

/**
 * Structure representing a command
 * Contains file descriptor and line information
 */
typedef struct cmd_s
{
	FILE *fd;
	char *line;
} cmd_t;

extern cmd_t cmd;
extern int value;

/**
 * Structure representing a stack
 * Uses a linked list, for implementation
 */* @n; an integer
 * @prev; points, to the element of the stack (or queue)
 * @next; points to the element of the stack (or queue)
 *
 * Description; structure for a node, in a doubly linked list
 * used for stacks, queues, LIFO and FIFO
 */
typedef struct stack_node_s
{
	int n;
	struct stack_node_s *prev;
	struct stack_node_s *next;
} stack_node_t;

/**
 * struct instruction_s. Opcode and its corresponding function
 * @opcode; the opcode
 * @f; function that handles the opcode
 *
 * Description; represents an opcode and its associated function
 * used for stacks, queues, LIFO and FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_node_t **stack, unsigned int line_number);
} instruction_t;

void execute(char *argv);
int get_opcode(stack_node_t **stack, char *arg, char* val,int line_number);
void push(stack_node_t **stack unsigned int line_number);
void print_all(stack_node_t **stack unsigned int line_number);
 print_top(stack_node_t **stack unsigned int line_number);
void pop(stack_node_t **stack unsigned int line_number);
void do_nothing(stack_node_t **stack unsigned int line_number);
void swap_elements(stack_note_t **stack unsigned int line_number);
void add_elements(stack_note_t **unsigned int line_number);
void subtract_elements(stack_note_t** stack, int linenumber);
void print_ascii_char(stack_note** stac,kunsigned_int_linenumber);
 void divide_elements (stakcnote** stac kunsigned_int_linenmuber;
 void multiply_elements (stakcnote** stac,kunsigned_int_linenmuber;
 void modulo_of_two_elemnets(stakcnote**stac,kunsigned_int_linenmuber;
int check_push_operation(char *token);
int get_value_from_token(char* token);
char determine_type_of_token(char* op, char* token);
void free_stack_nodes(stack_node_t *stack);
void clean_stack(stack_node_t **stack);
void display_usage_error(void);
void display_open_file_error(char *file);
void display_push_error(FILE *fd, char *line, stack_node_t *stack, int line_number);
void display_instruction_error(FILE *fd, char *line, stack_node_t *stack,char*val,int line_number);
int _
stack_t *createNode(int n);
End of file.
