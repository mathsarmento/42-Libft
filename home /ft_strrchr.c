#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = NULL;
	while (s[i])
	{
		if (s[i] == c)
			pointer = (char *)(s + i);
		i++;
	}
	return (pointer);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://\awww.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   char *teste;

	teste = ft_strrchr(str, ch);
   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, teste);
   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}