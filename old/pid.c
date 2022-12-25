#include <stdio.h>
#include <unistd.h>

/**
  * main - PID
  *
  * Return: Always 0
  */

int main(void)
{
	/* pid_t my_pid;*/
	pid_t parent;

	parent = getppid();
	/*my_pid = getpid();*/
	printf("parent id: %u\n", parent);
	return (0);
}
