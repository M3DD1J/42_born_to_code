#include <unistd.h>
//IL VALORE ASCII DI ZERO [0] E' 48! 
//TI SCONSIGLIO DI TRASCRIVERE DECIMALI NEGLI APICI PER DEFINIRE UN CARATTERE
void	ft_print_numbers(char n)

{
	n = '0';
//IL NOSTRO LOOP DOVRA SCRIVERE UN CARATTERE FINO A QUANDO IL VALORE n CHE E' 0 NON AVRA' SUPERATO IL 9
//POSSIAMO DEFINIRE CHE DUE VALORI DEBBANO ESSERE UGUALI [a == b] OPPURE DIVERSI [a != b]
//USIAMO  [<=][MINORE UGUALE] E [>=][MAGGIORE UGUALE]
		while(n <= '9')
//MENTRE n E' MINORE DI 9 LA FUNZIONE INCREMENTERA' IN MANIERA ESPONENZIALE IL VALORE DI n   ---|
		{
			write(1, &n, 1);
			n++;
		}
//IL LOOP TERMINA| 
}

/*
int	main()
{
	ft_print_numbers(' ');
	return 0;
}
*/
//M3DD1J
