#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * get_string_length - Calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int size = 0;

	while (s != NULL && s[size] != '\0')
		size++;
	return (size);
}

/**
 * remove_newline - Removes a newline character from a string
 * @s: The input string
 *
 * Return: None
 */
void remove_newline(char *s)
{
	int size = _strlen(s);

	if (s != NULL && s[size - 1] == '\n')
		s[size - 1] = '\0';
}

/**
 * duplicate_string - Creates a duplicate of the input string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	int size = 0;
	char *dup = NULL;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * tokenize_string - Splits string into array based on given token
 * @s: The input string
 * @t: The token used for splitting
 *
 * Return: None
 */
void get_args(char *s, const char *t)
{
	remove_newline(s);
	ext.arg1 = _strdup(strtok(s, t));
	ext.arg2 = _strdup(strtok(NULL, t));
}
