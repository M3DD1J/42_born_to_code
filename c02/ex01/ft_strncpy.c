#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;
	// COPIA I PRIMI n CARATTERI DI src IN dest
	while (src[i] != '\0' && i < n)

	{
		dest[i] = src[i];
		i++;
	}
	// SE src E' PI' CORTA DI n, AGGIUNGI CARATTERI NULLI
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

#include <stdio.h>

int	main()

{
	
	char	dest[50];
	char	src[] = "Hello, World!";
	unsigned int n = 4;

	ft_strncpy(dest, src, n);
	printf("array A: %s\n", src);
	printf("array B: %s\n", dest);
	printf("caratteri copiati: %u\n", n);
	return (0);
}
