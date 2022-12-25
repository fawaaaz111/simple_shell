#include "main.h"
/**
 *  * get_main - get the main
 *   * Return: pointer to a NULL-terminated statically-allocated array of main
*/
const main_t *get_main(void)
{
	static main_t main[] = {
		{"alias", alias, ALIAS_HELP, ALIAS_DESC},
		{"cd", cd, CD_HELP, CD_DESC},
		{"env", env, ENV_HELP, ENV_DESC},
		{"exec", exec, EXEC_HELP, EXEC_DESC},
		{"exit", exit, EXIT_HELP, EXIT_DESC},
		{"help", help, HELP_HELP, HELP_DESC},
		{"setenv", setenv, SETENV_HELP, SETENV_DESC},
		{"unsetenv", unsetenv, UNSETENV_HELP, UNSETENV_DESC},
		{0}
	};
	return (main);
}
/**
 *  * get_main - get a main by name
 *   * @name: the name of the main to retrieve
 *    * Return: NULL if no match is found, otherwise a pointer to the main
*/
const main_t *get_main(const char *name)
{
	const main_t *main = NULL;
	for (main = get_main(); main->name; main += 1)
	{
		if (_strcmp(name, main->name) == 0)
			return (main);
	}
	return (NULL);
}
