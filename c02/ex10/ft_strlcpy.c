#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len = 0;
	unsigned int	i = 0;

	// CALCOLIAMO LA LUNGHEZZA DELLA STRINGA DI ORIGINE
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	// COPIAMO LA STRINGA DI ORIGINE NEL BUFFER DI DESTINAZIONE
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	// AGGIUNGIAMO IL CARATTERE NULLO DI TERMINAZIONE
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return src_len;
}

#include <stdio.h>

int	main()
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	copied_len;
	// copied_len CONTIENE IL RISULTATO DELLA FUNZIONE ft_strlcpy GRAZIE ALLA FUNZIONE sizeof
	copied_len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Stringa di origine: %s\n", src);
	printf("Buffer di destinazione:%s\n", dest);
	printf("Lunghezza della stringa copiata: %u\n", copied_len);
	return 0;
}
