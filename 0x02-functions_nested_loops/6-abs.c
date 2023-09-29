#include "main.h"

/**
*_abs - computes the absolute value of an integer
*@xy: initial integer
*Return: absolute value of the integer
*/
int _abs(int xy)
{
	return (xy * ((xy > 0) - (xy < 0)));
}
