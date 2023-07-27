#include <unistd.h>

void	ft_putchar(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

int	main()

{
	char *c = "Hello World2!";
	ft_putchar(c);
	return (0);
}
