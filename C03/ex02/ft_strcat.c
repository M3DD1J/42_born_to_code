#include <unistd.h>

char	*ft_strcat(char *dest, char *src)

{
	// TROVA LA LUNGHEZZA DELLA STRINGA DI DESTINAZIONE
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	
	// COPIA I CARATTERI DELLA STRINGA SORGENTE ALLA FINE DELLA STRINGA DI DESTINAZIONE
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	// AGGIUNGIAMO IL TERMINATORE DI STRINGA ALLA FINE DELLA STRINGA DI DESTINAZIONE
	dest[dest_len] = '\0';
	
	// RESTITUISCI IL PUNTATORE ALLA STRINGA DI DESTINAZIONE MODIFICATA
	return dest;
}

#include <stdio.h>

int main()
{
	char dest[50] = "Hello, ";
	char src[] = "World!";

	ft_strcat(dest, src);
	printf("Concatenated string: %s\n", dest);
	
	return 0;
}
