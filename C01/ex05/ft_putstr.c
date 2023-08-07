#include <unistd.h>

void	ft_putstr(char *str)

{	
	int 	ln;
	ln = 0;
	while (str[ln] != '\0')
		{
		ln++;
//write(1, str, ln);
		}
	write(1, str, ln);
	}
	

#include <stdio.h>

int	main()	
{
	ft_putstr("Hello World!");
}
//M3DD1J
