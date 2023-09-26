#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - writes the character c to stdout
 * @ac: argument count
 * @av: Second arguement
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *argstostr(int ac, char **av)
{
char *new = NULL;
int i, j, k = 0, len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
}
new = malloc(sizeof(char) * (len + ac + 1));
if (new == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
new[k++] = av[i][j];
}
new[k++] = '\n';
}
new[k] = '\0';
return (new);
}
