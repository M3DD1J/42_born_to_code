#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)

{
	if (*to_find == '\0')
		return str;

	while (*str != '\0')
	{
		char *start = str;
		char *pattern = to_find;

		while (*pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
			return start;

		str = start + 1;
	}
	return NULL;
}
#include <stdio.h>

int	main()
{
	char str[] = "Hello, World!";
	char to_find1[] = "World";
	char to_find2[] = "Hi";
	char to_find3[] = "";

	char *result1 = ft_strstr(str, to_find1);
	char *result2 = ft_strstr(str, to_find2);
	char *result3 = ft_strstr(str, to_find3);
	
	if (result1 != NULL)
		printf("First occurrence of \"%s\" fount at index: %ld\n", to_find1, result1 - str);
	else
		printf("\"%s\" not found in the string.\n", to_find1);
	if (result2 != NULL)
		printf("First occurrence of \"%s\" found at index: %ld\n", to_find2, result2 - str);
	else
		printf("\"%s\" not found in the string.\n", to_find2);
	if (result3 != NULL)
		printf("First occurrence of \"%s\" found at index: %ld\n", to_find3, result3 - str);
	else
		printf("\"%s\" not found in the string.\n", to_find3);
	return 0;

}
