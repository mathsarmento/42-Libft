
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	newstr = (char *)ft_calloc(ft_strlen(s) + 1,sizeof(char));
	while (s[i])
	{
		newstr[i] = (f)(i, s[i]);
		i++;
	}
	return (newstr);
}