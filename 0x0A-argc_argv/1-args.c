#include <stdio.h>
#include "main.h"

/**
 * main - print the number of agrument passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	(void) argv; /*Igonre argv*/

	printf("%d\n", argc - 1);

	return (0);

}

