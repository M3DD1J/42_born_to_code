#include <unistd.h>

int	ft_str_is_printable(char *str)

{
	int	i;
	i = 0;

	if (str[0] == '\0')
	{
		return 1;
	}
	
	while (!(str[i] >= 32 && str[i] <= 126))
	{

		//while (!(ft_is_printable(str[i])))
		//{
		//return 0;
		//}
			return 0;
	
		i++;
	}
	return 1;
}

int	main()

{
	char str1[] = "Hello, World!";
	char str2[] = "\x7F";
	char str3[] = "1234";
	char str4[] = "";
	int i = 0;
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	write(1, str1, i);
	if (ft_str_is_printable(str1))
	{
		write(1, "\ncontiene solo caratteri stampabili!\n\n\n", 38);
	}
	else
	{
		write(1, "\nnon contiene caratteri stampabili!\n\n\n", 37);
	}
	while (str2[i2] != '\0')
	{
		i2++;
	}
	write(1, str2, i2);
	if (ft_str_is_printable(str2))
	{
		write(1, "\ncontiene solo caratteri stampabili!\n\n\n", 38);
	}
	else
	{
		write(1, "\nnon contiene caratteri stampabili!\n\n\n", 37);
	}
	
	while (str3[i3] != '\0')
	{
		i3++;
	}
	write(1, str3, i3);
	if (ft_str_is_printable(str3))
	{
		write(1, "\ncontiene solo caratteri stampabili!\n\n\n", 38);
	}
	else
	{
		write(1, "\nnon contiene caratteri stampabili!\n\n\n", 37);
	}
	
	while (str4[i4] != '\0')
	{
		i4++;
	}
	
	write(1, str4, i4);
	
	
	if (ft_str_is_printable(str4))
	{
		if (str4[0] == '\0')
		{
			write(1, "\nnon contiene caratteri!\n", 25);
		}
		else
		{
			write(1, "\ncontiene solo caratteri stampabili!!\n", 37);
		}
	}
	else
	{
		write(1, "\nnon contiene caratteri stampabili!\n", 36);
	}
	return 0;
}                                                                                                                            
