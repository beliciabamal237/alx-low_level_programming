#include "main.h"

/**
 *main - Entry point
 *
 *the use function puts
 *
 *Return: Always 0(Success)
 */

int main(void)
{
	char message[] = "_putchar";
	int count = 0;


	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}

