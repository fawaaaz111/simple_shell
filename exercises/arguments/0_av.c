#include <stdio.h>

/**
  * main - print all the arguments, without using ac.
  * @ac: numbers of items in av
  * @av: is terminated array of strings
  *
  * Return: Always 0
  */

int main(int ac, char **av)
{
	int i; /* counter */

	i = 1; /* assign to 0 if to start with ./name */
	while (av[i] != NULL)
	{
		printf(" args are %s\n", av[i]);
		i++;
	}
	return (0);
}
