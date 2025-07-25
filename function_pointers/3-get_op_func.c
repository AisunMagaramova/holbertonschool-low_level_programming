#include <stddef.h>     /* NULL */
#include "3-calc.h"

/**
 * get_op_func - secilmis emeliyyat ucun funksiyya qaytarir
 * @s:emeliyyat sinvolunu gosteren setir
 *
 * Return: uygun funksiya gostericilerii ve  ya NULL egerr tapılmazsa
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
