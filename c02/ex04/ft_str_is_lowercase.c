#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return 1;
	}

	while (!(str[i] >= 97 && str[i] <= 122))
	{
		return 0;
		i++;
	}
	return 1;
}

/*
int	main()

{
	char str1[] = "Hello, World!";
	char str2[] = "lower";
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

	if (ft_str_is_lowercase(str1))
	{
		write(1, "\ncontiene solo lettere minuscole\n\n", 34);
	}
	else
	{
		write(1, "\ncontiene altri caratteri\n\n", 27);
	}
	
	while (str2[i2] != '\0')
	 {
		 i2++;
	 }

	write(1, str2, i2);
	if (ft_str_is_lowercase(str2))
	 {
		 write(1, "\ncontiene solo lettere minuscole\n\n", 34);
	 }
	 else
	 {
		 write(1, "\ncontiene altri caratteri\n\n", 27);
	 }	 
	 
	 while (str3[i3] != '\0')
	 {
		 i3++;
	 }
	 
	 write(1, str3, i3);
	 if (ft_str_is_lowercase(str3))
	 {
		 write(1, "\ncontiene solo lettere minuscole\n\n", 34);
	 }
	 else
	 {
		 write(1, "\ncontiene altri caratteri\n\n", 27);
	 }
	
	 while (str4[i4] != '\0')
	 {
		 i4++;
	 }
	 
	 write(1, str4, i4);
	 if (ft_str_is_lowercase(str4))
	 {
		 if (str4[0] == '\0')
				 {
			write(1, "\nnon contiene caratteri!\n", 25);
				 }
		 else {
		 write(1, "\ncontiene solo lettere minuscole\n", 34);
	 
		 }
	 }
	 else
	 {
		 write(1, "\ncontiene altri caratteri\n", 27);
	 }
	 return 0;
}
*/