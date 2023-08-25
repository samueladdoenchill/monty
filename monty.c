#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
#include <unistd.h>
#include <string.h>

ext_t ext = {NULL, NULL, 0, NULL, NULL, NULL};

/**
 * main - Entry point for the Monty interpreter
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	size_t size = 0;
	instruction_t inst;

	(void)argc;

	if (argc != 2)
	{
		fprintf(stderr, "Error: Can't open file <file>\n");
		 exit_free();
	}
	ext.file = fopen(argv[1], "r");
	if (ext.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit_free();
	}
	else
	{
		while (getline(&ext.content, &size, ext.file) != -1)
		{
			get_args(ext.content, " ");
			ext.line_number++;
			if (ext.arg1)
			{
				inst = get_function(ext.arg1);
				free(ext.arg1);
				ext.arg1 = NULL;
				inst.f(&ext.h, ext.line_number);
			}
			if (ext.arg2)
			{
				free(ext.arg2);
				ext.arg2 = NULL;
			}
		}
		free_heap();
		fclose(ext.file);
	}
	return (0);
}
