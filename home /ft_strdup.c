#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	dup = malloc(len * (sizeof(char)));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

int main(void)
{
    const char *s1 = "rewetes";
    char *s2 = ft_strdup(s1);
    char *s3 = strdup(s1);

	printf("%s\n", s2);
	printf("%s\n", s3);
}