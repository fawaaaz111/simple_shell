#include <stdio.h>

/**
  * main - print user command on next line
  *
  * Return: Always 0
  */

int main(void)
{
	char string[256];
	char *ptr = string;

	printf("$ ");
	scanf("%s", ptr);

	printf("%s\n", ptr);
	return (0);
}
