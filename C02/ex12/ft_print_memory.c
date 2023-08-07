#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_print_ascii(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_print_line(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			ft_print_hex(ptr[i + j]);
		else
			write(1,"  ", 2);
		if ((j + 1) % 2 == 0)
			write(1, " ", 1);
		j++;
	}
	write(1, " ", 1);
	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_print_ascii(ptr[i + j]);
		j++;
	}
	write(1, "\n", 1);
}

void	ft_print_address(unsigned int c)
{
	char	hex[17];
	int	i;

	//hex = "0000000000000000";
	i = 0;
	while (i < 16)
	{
		hex[i] = "0123456789abcdef"[(c >> (60 - i * 4)) & 0xf];
		i++;
	}
	hex[i] = '\0';
	write(1, hex, 16);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_address(i);
		write(1, ":", 1);
		ft_print_line(ptr, size, i);
		i += 16;
	}
}


#include <stdio.h>

int	main()
{
	char	str[] = "Bonjour les aminches...c'est fou...tout...ce qu'on peut faire avec...print_memory....lol.lol.";
	ft_print_memory(str, sizeof(str) - 1);
	return (0);
}
