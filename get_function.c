#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * get_opcode_function - Retrieves function associated with opcode
 * @op: The opcode
 *
 * Return: Structure containing associated function
 */
instruction_t get_function(char *op)
{
	instruction_t instruction = {NULL, NULL};

	instruction.opcode = op;
	if (strcmp(op, "push") == 0)
		instruction.f = push;
	else if (strcmp(op, "pall") == 0)
		instruction.f = pall_print;
	else if (strcmp(op, "pint") == 0)
		instruction.f = pint_func;
	else if (strcmp(op, "pop") == 0)
		instruction.f = pop;
	else if ((strcmp(op, "nop") == 0) || (op[0] == '#'))
		instruction.f = nop;
	else if (strcmp(op, "swap") == 0)
		instruction.f = swap;
	else if (strcmp(op, "add") == 0)
		instruction.f = add;
	else if (strcmp(op, "sub") == 0)
		instruction.f = sub;
	else if (strcmp(op, "div") == 0)
		instruction.f = div_op;
	else if (strcmp(op, "mul") == 0)
		instruction.f = mul_op;
	else if (strcmp(op, "mod") == 0)
		instruction.f = mod;
	else if (strcmp(op, "pchar") == 0)
		instruction.f = pchar;
	else if (strcmp(op, "pstr") == 0)
		instruction.f = pstr;
	else if (strcmp(op, "rotl") == 0)
		instruction.f = rotl;
	else if (strcmp(op, "rotr") == 0)
		instruction.f = rotr;
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				ext.line_number, ext.arg1);
		exit_free();
	}
	return (instruction);

}
