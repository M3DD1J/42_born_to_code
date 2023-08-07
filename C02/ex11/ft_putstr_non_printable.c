#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	unsigned char	c; 

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];	// CONVERTO IL CARATTERE CORRENTE IN unsigned char
		if ((c >= 32 && c <= 126) || c >= 128) // SE IL CARATTERE E' STAMPABILE! [ASCII ESTESO]
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1); // SCRIVO UNA BARRA ROVESCIATA
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		i++;
	}
}
#include <stdio.h>

int	main()
{
	char	str1[] = "\033[31mHello\033[0m\f\t\n";
	char	str2[] = "Testèé§çàò\x7F%stringa";
	printf("\n\n");
	printf("Stringa originale 1 -> %s\n\t", str1);
	printf(" <- stringa modificata");
	ft_putstr_non_printable(str1);
	printf("\n\n");
	printf("Stringa originale 2 -> %s\n\t", str2);
	printf(" <- stringa modificata");
	ft_putstr_non_printable(str2);
	printf("\n\n");
	return 0;
}
