#include <unistd.h>

char	*ft_strcapitalize(char *str)

{
	int	i;
	int	capitalize_next;
	capitalize_next = 1;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		// IMPOSTA IL FLAG capitalize_next PER IL PROSSIMO CARATTERE
		if (str[i] >= 32 && str[i] <= 64
				|| str[i] >=  91 && str[i] <= 96
				|| str[i] >= 123 && str[i] <= 127)
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		i++;
	}
	return str;
}

int	main()
{
	char	str[] = "salut,c}omm[ent tu|vas ?o 42mots_quarante-deux;cinquante+et^un";

	write(1, "Input string: ", 14);
	write(1, str, sizeof(str) - 1); // -1 PER NON INCLUDERE IL CARATTERE NULL TERMINATOR
	write(1, "\n", 1);

	ft_strcapitalize(str);

	write(1, "Capitalized string: ", 20);
	write(1, str, sizeof(str) - 1);
	write(1, "\n", 1);
	return 0;
}
