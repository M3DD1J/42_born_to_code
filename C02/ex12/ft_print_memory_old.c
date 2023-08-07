#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_ascii(unsigned char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
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
			ft_putchar(' ');
		j++;
	}
	ft_putchar(' ');
	j = 0;
	while (j < 16 && i + j < size)
	{
		ft_print_ascii(ptr[i + j]);
		j++;
	}
	ft_putchar('\n');
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	j;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hex(i);
		ft_putchar(':');
		if ((i + 16) <= size)
			ft_print_line(ptr, size, i);
		else
		{
			j = 0;
			while (j++ < 16 - (size - i))
				write(1, "   ", 3);
			ft_print_line(ptr, size, i);
		}
		i += 16;
	}
}

#include <stdio.h>

int	main()
{
	char	str[] = "Bonjour les amin ches...c.estfou.tout.cequon ..lol.lol. .";
	ft_print_memory(str, sizeof(str) - 1);
	return (0);
}
