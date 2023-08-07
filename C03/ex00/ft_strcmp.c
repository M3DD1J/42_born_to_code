#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	// SE UNA DELLE STRINGHE E' PIU* LUNGA DELL\ALTRA, CONSIDERA QUELLA PIU* LUNGA COME MAGGIORE
	return s1[i] - s2[i];
}

#include <stdio.h>

int	main()

{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Bonjour";
	char	str4[] = "Bonjourno";
	char	str5[] = "Hello, World!";

	int	result1 = ft_strcmp(str1, str2);
	int	result2 = ft_strcmp(str1, str3);
	int	result3 = ft_strcmp(str3, str4);
	int	result4 = ft_strcmp(str4, str5);
	int	result5 = ft_strcmp(str5, str1);

	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);
	printf("Comparing \"%s\" and \"%s\": %d\n", str3, str4, result3);
	printf("Comparing \"%s\" and \"%s\": %d\n", str4, str5, result4);
	printf("Comparing \"%s\" and \"%s\": %d\n", str5, str1, result5);

	return 0;
}
//M3DD1J
