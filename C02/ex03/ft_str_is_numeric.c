#include <unistd.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	

	if (str[0] == '\0')
	{
		return 1;
	}
	while (str[i] != '\0')
	{
		

		if (!(str[i] >= '0' && str[i] <= '9'))
				{
				return 0;
				}
		i++;
	}
	return 1;
}
/*
#include <stdio.h>
int	main()

{
	char str1[] = "12345";
	char str2[] = "Hello123";

	printf("Stringa 1 è numerica? %d\n", ft_str_is_numeric(str1));
	printf("Stringa 2 è numerica? %d\n", ft_str_is_numeric(str2));

	return 0;
}
*/