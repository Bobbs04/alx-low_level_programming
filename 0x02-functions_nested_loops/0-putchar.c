#include <unistd.h>
/**
 * main -Entry point
 * 
 * Description:A program that prints_putchar, followed by a new line.
 *
 * Return: always 0 (success)
 * 
 */
#include "main.h"
int main(void)
{
	char k [] ="_putchar";
	int i = 0;
	
	while (k[i] <= 8)
	{
		_putchar(k[i]);
		i++
	}
	_putchar ('/n';
	return (0);
}
