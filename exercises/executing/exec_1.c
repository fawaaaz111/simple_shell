#include <stdio.h>
#include <unistd.h>

/**
 *  * main - execve example
 *   *
 *    * Return: Always 0.
*/
int main(void)
{
char *argv[] = {"./find_length", "fawaz", NULL};
printf("Before exec\n");
if (execve(argv[0], argv, NULL) == -1)
{
	perror("Error:");
}
printf("After exec\n");
return (0);
}
