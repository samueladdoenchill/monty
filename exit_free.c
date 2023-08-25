#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * free_heap - Deallocates all allocated memory
 *
 * Return: void
 */
void free_heap(void)
{
	free_stack(ext.h);
	if (ext.arg1)
		free(ext.arg1);
	if (ext.arg2)
		free(ext.arg2);
	if (ext.content)
		free(ext.content);
}

/**
 * exit_free - Deallocates all allocated memory and exits
 *
 * Return: None
 */
void exit_free(void)
{
	free_heap();
	if (ext.file)
	{
		fclose(ext.file);
		ext.file = NULL;
	}
	exit(EXIT_FAILURE);
}
