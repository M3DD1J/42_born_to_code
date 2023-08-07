#include <unistd.h>

char	*ft_strlowercase(char *str)

{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}

int	main()
{
	char	str[] = "Hello, World!";
	
	write(1, "Input:\t", 7);
	write(1, str, sizeof(str) -1);
	write(1, "\n", 1);
	ft_strlowercase(str);
	write(1, "Output:\t", 8);
	write(1, str, sizeof(str) -1);
	write(1, "\n", 1);
	return 0;
}
