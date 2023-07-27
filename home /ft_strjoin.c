#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	len = ft_strlen (s1) + ft_strlen (s2);
	if (!len)
		return (NULL);
	str = malloc(len * sizeof(char) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "matheus sarmento é ";
	char	str2[] = "legal";
	char	*str3 = ft_strjoin(str1, str2);

	printf("%s", str3);
}