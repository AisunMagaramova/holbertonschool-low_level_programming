#include "3-calc.h"

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - İkiededin ferqini qaytarır
 * @a: birinci eded
 * @b: ikinci eded
 *
 * Return: ferq(a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - İkiededin hasilini qaytarır
 * @a: birinci eded
 * @b: ikinci eddd
 *
 * Return: hasil (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - İkiededin neini qaytarır
 * @a: bolunen eded
 * @b: b�len eded
 *
 * Return: nisbet (a / b)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - İkiededinn qalıq böesini qaytarır
 * @a: birinci eded
 * @b: ikinci eded
 *
 * Return: qalıq (a % b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
