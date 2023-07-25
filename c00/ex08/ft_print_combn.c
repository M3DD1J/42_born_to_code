#include <unistd.h>
void	ft_print_combn()

{	
	int	a;
	int	b;
	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
//SCRIVERE QUI		write(1, ", ", 2); PORTERA' A STAMPARE LA VIRGOLA ANCHE NELL'ULTIMO RISULTATO 
//SE a ESCE DAL CICLO NON STAMPARE LA VIRGOLA E LO SPAZIO >> [else] MA INVECE STAMPA UN NUOVO RIGO [new line] 
			if (a != '8')
			write(1, ", ", 2);
			else
				write(1, "\n", 1);
		b++;
		}
	a++;
	}
}
/*
int	main()
{
	ft_print_combn(2);
	return 0;
}
*/
//M3DD1J
