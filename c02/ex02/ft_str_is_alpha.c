#include <unistd.h>

int	ft_str_is_alpha(char *str)

{
	int i = 0;

	if (str[0] == '\0')
		return 1;

	while (str[i] != '\0')
	{

		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return 0;
		i++;
	}
	return 1;
}

int	main()
{
	char str1[] = "HelloWorld";
	char str2[] = "123abc";
	char str3[] = "abcd$%";
	char str4[] = "";
	int i = 0;
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;
	
	while (str1[i] != '\0')
	{
		i++;
	}
	write(1, &str1, i);	
	if (ft_str_is_alpha(str1))
		write(1, "\nstr1 contiene solo caratteri alfabetici\n\n", 42);
	else
		write(1, "\nstr1 contiene caratteri non alfabetic\n\n", 40);

	while (str2[i2] != '\0')
	{
		i2++;
	}
	write(1, &str2, i2);
	
	if (ft_str_is_alpha(str2))
		write(1, "\nstr2 contiene solo caratteri alfabetici\n\n", 42);
	else
		write(1, "\nstr2 contiene caratteri non alfabetici\n\n", 42);
	
	while (str3[i3] != '\0')
	{
		i3++;
	}
	write(1, &str3, i3);
	
	if (ft_str_is_alpha(str3))
		write(1, "\nstr3 contiene solo caratteri alfabetici\n", 41);
	else
		write(1, "\nstr3 contiene caratteri non alfabetici\n", 40);
	
	
	while (str4[i4] != '\0')
	{
		i4++;
	}
	write(1, &str4, i4);

	
	if (ft_str_is_alpha(str4))
		write(1, "\nstr4 contiene solo caratteri alfabetici\n\n", 42);
	else
		write(1, "\nstr4 contiene caratteri non alfabetici\n\n", 41);

	
	
	return 0;
}
