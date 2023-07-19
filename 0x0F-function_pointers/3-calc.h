#ifndef CALC_H
#define CALC_H

/* Function prototypes for the calculator program */

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of the two integers
 */

int op_add(int a, int b);

/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction (a - b)
 */

int op_sub(int a, int b);

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of the two integers
 */

int op_mul(int a, int b);

/**
 * op_div - Divides two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division (a / b)
 */

int op_div(int a, int b);

/**
 * op_mod - Computes the modulo of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the modulo operation (a % b)
 */

int op_mod(int a, int b);

/**
 * get_op_func - Selects the appropriate function for the given operator
 * @s: The operator as a string
 * Return: A function pointer corresponding to the operator
 */

int (*get_op_func(char *s))(int, int);

/* Data structure for operators and functions */

/**
 * struct op - Struct op
 * @op: The operator as a string
 * @f: A function pointer corresponding to the operator
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

#endif /* CALC_H */
