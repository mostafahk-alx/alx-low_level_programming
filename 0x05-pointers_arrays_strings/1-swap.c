/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: variable one
 * @b: variable two
 *
 */

void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
