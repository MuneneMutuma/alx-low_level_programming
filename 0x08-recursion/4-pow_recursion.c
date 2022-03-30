/**
 * _pow_recursion - finds the power of a number raised to another
 *
 * @x: base
 * @y: exponent
 *
 * Return: x^y if y >= 0
 *	   -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
