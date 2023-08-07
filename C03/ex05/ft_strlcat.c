#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len = ft_strlen(dest);
	unsigned int src_len = ft_strlen(src);
	unsigned int total_len = dest_len + src_len;

	if (size <= dest_len)
		return src_len + size;

	unsigned int i = 0;

	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return total_len;
}
#include <stdio.h>
int main()
{
	char dest[] = "Hello";
	char src[] = ", World!";
	unsigned int size = 20;

	printf("Stringa di destinazione originale: %s\n", dest);
	printf("Stringa di origine: %s\n", src);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("Stringa di destinazione dopo ft_strlcat: %s\n", dest);
	printf("Lunghezza totale dopo ft_strlcat: %u\n", result);
	return 0;
}
