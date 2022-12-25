#include "builtins.h"
/**
 *  * get_builtin - get the builtin
 *   * Return: pointer to a NULL-terminated statically-allocated array of builtin
*/
const builtin_t *get_builtins(void)
{
	static builtin_t builtins[] = {
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
	return (builtins);
}
/**
 *  * get_builtins - get a builtin by name
 *   * @name: the name of the builtin to retrieve
 *    * Return: NULL if no match is found, otherwise a pointer to the main
*/
const builtin_t *get_builtins(const char *name)
{
	const builtin_t *builtins = NULL;
	for (main = get_builtins(); builtin->name; main += 1)
	{
		if (_strcmp(name, builtin->name) == 0)
			return (builtins);
	}
	return (NULL);
}
