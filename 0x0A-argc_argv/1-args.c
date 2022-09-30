#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
