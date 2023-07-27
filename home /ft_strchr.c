#include "libft.h"
#include <stdio.h>
#include <string.h>


char	*strchr(const char *s, int c)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			pointer = (char *)(s + i);
			return (pointer);
		}
		i++;
	}
	return (pointer);
}