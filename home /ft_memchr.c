#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*pointer;
	size_t		i;

	i = 0;
	pointer = NULL;
	while (i < n)
	{
		if (*(const char *)(s + i) == c)
		{
			pointer = (void *)(s + i);
			return (pointer);
		}
		i++;
	}
	return (pointer);
}

int main () {
   const char str[] = "https\n://www.tutori\0alspoint.com";
   const char ch = '.';
   const char *ret;
   const char *teste;

   ret = memchr(str, ch, 30);
	teste = ft_memchr(str, ch, 30);

   printf("ft_memchr: String after |%c| is - |%s|\n", ch, teste);
   printf("memchr: String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}