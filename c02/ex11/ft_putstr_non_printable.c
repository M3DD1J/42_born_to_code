#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 32 && str[i] <= 126)// SE IL CARATTERE E' COMPRESO NEI CARATTERI STAMPABILI
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			char hex[2];
			hex[0] = "0123456789abcdef"[*str / 16];
			hex[1] = "0123456789abcdef"[*str % 16];
			write(1, hex, 2);
		}
		i++;
	}
}
#include <stdio.h>

int	main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Coucoun tu v\aas bien ?";
	char str3[] = "Test\x7Fstringa";
	
	printf("Stringa originale 1 -> %s\n\t", str1);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str1);
	printf("\n\n");
	
	printf("Stringa originale 2 -> %s\n\t", str2);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str2);
	printf("\n\n");
	
	printf("Stringa originale 3 -> %s\n\t", str3);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str3);
	printf("\n\n");
	return 0;
}                 	
