#include <stdio.h>

int main(void)
{
	printf("enter a number :\n");
	unsigned int num, length = 0; /* number to be entered */

	scanf("%d" , &num);

	do {
		++length;
		num /= 10;
	} while (num);

	printf("the length = %d\n", length);
	return 0;
}
