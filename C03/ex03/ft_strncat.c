#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{	
	// TROVIAMO LA LUNGHEZZA DI dest
	int	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	// COPIAMO I PRIMI nb CARATTERE DELLA STRINGA src ALLA FINE DI dest
	unsigned int	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	// AGGIUNGIAMO IL TERMINATORE DI STRINGA ALLA FINE DI dest
	dest[dest_len] = '\0';
	// RESTITUIAMO IL PUNTATORE ALLA STRINGA DI DESTINAZIONE MODIFICATA
	return (dest);
}

#include <stdio.h>

int	main()

{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	unsigned int nb = 6;

	printf("Before concatenation: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("After concatenation: %s\n", dest);

	return 0;
}

