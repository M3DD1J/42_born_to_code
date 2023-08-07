#include <unistd.h>

int	ft_strlen(char *str)

{
	  if (str == NULL) 
	  {
		  return (0);
	  }
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

#include <stdio.h>
int	main()

{
	char str[100] = "Hello World!";
	int lenght = ft_strlen(str);
	printf("%d/100\n", lenght);
	return (0);
}
