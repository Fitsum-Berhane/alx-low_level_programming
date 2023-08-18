#include "main.h"

/**
* _isdigit.c - checks if a promt is a digit
*
* @d: digit that will be checked.
*
* Return: 0 or 1
*/

 int _isdigit(int d)
{
        if (d >= '0' && d <= '9')
                return (1);
        else
                return (0);
}

