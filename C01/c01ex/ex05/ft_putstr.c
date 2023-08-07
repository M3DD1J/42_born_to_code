#include <unistd.h>

void	ft_putstr(char *str)

{	
	int ln = 0;

	while (str[ln] != '\0')	{	
		ln++;
	}
	str[ln] = '\n';
	ln++;
	
		write(1,str, ln);
	
	
}
int	main()

{
	char str[100] = "hello world!";
	ft_putstr(str);
	return (0);
}
