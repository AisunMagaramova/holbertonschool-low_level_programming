/**
 * swap_int - iki tam ededin qiymeti deyisir
 * @a: birinci tam edede
 * @b: ikinci tam edede  integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b; 
	*b = temp;
}
