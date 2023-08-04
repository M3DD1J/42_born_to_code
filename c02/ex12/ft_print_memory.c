#include <unistd.h>

void	print_hex(unsigned char c)

{
	char	hex[2];
	hex[0] = "0123456789abcdef"[c / 16];
	hex[1] = "0123456789abcdef"[c % 16];

	write(1, hex, 2);
}

void	print_printable_char(unsigned char c)
{
	char printable;
	if (c >= 32 && c <= 126)
		printable = c;
	else
		printable = '.';
	write(1, &printable, 1);
}
void	*ft_print_memory(void *addr, unsigned int size)

{	// Stampa l'indirizzo in esadecimale
	unsigned char *ptr = (unsigned char *)addr;
	unsigned int i = 0;
	unsigned int col;

	while (i < size)
	{
		print_hex((unsigned long long)&ptr[i]);
		write(1, ":", 2);
		// Stampa il contenuto in esadecimale
		col = 0;
		
		while (col < 16 && i + col < size)
		{
			print_hex(ptr[i + col]);
			if (col % 2 == 1)
				write(1, " ", 1);
			col++;
		}
		// Riempie con spazi se necessario
		while (col < 16)
		{
			write(1, " ", 2);
			if (col % 2 == 1)
				write(1, " ", 1);
			col++;
		}
		// Stampa il contenuto stampabile
		col = 0;
		while (col < 16 && i + col < size)
		{
			print_printable_char(ptr[i + col]);
			col++;
		}

		write(1, "\n", 1);
		i += 16;
	}
	return addr;
}
#include <stdio.h>

int	main()
{
	char str[] = "Bonjour les amin ches...c. est fo u.tout.ce qu on u.tout.ce qu on ..lol.lol. .";
	ft_print_memory(str, sizeof(str) - 1);
	return 0;
}
