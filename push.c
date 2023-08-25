#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * push - Adds an element to the top of the stack
 * @stack: Pointer to the top node of the stack
 * @line_number: The line number
 * 
 * Return: None
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int i = 0;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit_free();
	}
	if (ext.arg2 == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(new_node);
		exit_free();
	}
	while (ext.arg2[i] != '\0')
	{
		if (!(ext.arg2[i] >= '0' && ext.arg2[i] <= '9'))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			free(new_node);
			exit_free();
		}
		i++;
	}
	new_node->n = atoi(ext.arg2);
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
