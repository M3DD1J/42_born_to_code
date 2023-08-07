#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126) || (str[i] >= 128 && str[i] <= 256))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}
}
#include <stdio.h>

int	main()
{
	char	str1[] = "\033[31mHello\033[0m\f\t\n";
	char	str2[] = "Test\x7F%stringa";
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
