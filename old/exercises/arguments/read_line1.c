#include <stdio.h>
#include <stdlib.h>

/**
  * main - print all the arguments, without using ac.
  * @ac: numbers of items in av
  * @av: is terminated array of strings
  *
  * Return: Always 0
  */

int main(int ac, char **av)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
	}
	return (0);
}
