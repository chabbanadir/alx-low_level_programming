#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: input pointer
 * @to: char that will be sets with the input pointer
 *
 * Return: noting
 */
void set_string(char **s, char *to) {
    *s = to;
}
