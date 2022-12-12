#include <stdio.h>
#include <unistd.h>

/**
  * main - PID
  *
  * Return: Always 0
  */

int main(void)
{
	pid_t my_pid;
	pid_t parent;

	parent = getppid();
	my_pid = getpid();
	printf("process id: %u\nparent id: %u\n", my_pid, parent);
	return (0);
}
