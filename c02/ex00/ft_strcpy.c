#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

#include <stdio.h>
int	main()
{
	char dest[50] = "--------------";
	char src[50] = "Hello, World!";

	printf("src     -> %s\n", src);
	printf("dest    -> %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_strcpy fa il suo >-<\n");
	printf("new src -> %s\n", src);
	printf("new dest-> %s\n", dest);
	return (0);
}
