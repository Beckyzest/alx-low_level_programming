#include "main.h"

#include <stdio.h>

/**
* print_line - prints a s bytes of a buffer
* @c: buffer to print
* @s: bytes of buffer to print
* @l: line of buffer to print
*/
void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

<<<<<<< HEAD
	 if (size <= 0)
		 printf("\n");
	 else
	 {
		 for (i = 0; i < size; i += 10)
		 {
			 printf("%.8x:", i);
			 for (j = i; j < i + 10; j++)
			 {
				 if (j % 2 == 0)
					 printf(" ");
				 if (j < size)
					 printf("%.2x"' *(b + j));
			 }
				 else
					 print(" ")
			 }
			 printf(" ");
			 for (k = i; k < i + 10; k++);
			 {
				 if (k >= size)
					 break;
				 if (j < size)
=======
/**
* print_buffer - prints a buffer
* @b: buffer to print
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int i;
>>>>>>> cee575c214f28d9acbf789a158bb543e60083f39

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
