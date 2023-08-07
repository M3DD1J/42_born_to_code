#include <unistd.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') // se\IL CARATTERE ANALIZZATO E' INCLUSO TRA a/97 E z/122
		{
			str[i] = str[i] - 32; // IL CARATTERE VIENE MODIFICATO CON UN CARATTERE POSTO
		}			     //  32 SLOT IN MENO IN ASCII [ a/97 - 32 = A/65 ]
		i++;
	}
	return str;
}

int	main()

{
	char str1[] = "hElLo WoRlD!";
	
	write(1, "Input:\t", 7);
	write(1, str1, sizeof(str1) -1); // -1 ESCLUDE IL CARATTERE NULL TERMINATOR
	write(1, "\n", 1);
	ft_strupcase(str1);
	write(1, "Output:\t", 8);
	write(1, str1, sizeof(str1) -1);
	write(1, "\n", 1);
	return 0;
}
