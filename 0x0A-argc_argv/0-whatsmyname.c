#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
