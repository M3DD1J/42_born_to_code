#include <unistd.h>
//DOBBIAMO CREARE UNA FUNZIONE PER LA SCRITTURA DEI CARATTERI ft_putchar
void	ft_putchar(char c)

{
	write(1, &c, 1);
}

//DOPO AVER DEFINITO char CREIAMO UNA FUNZIONE CHE DEFINISCA LA FORMA ft_write

void	ft_write(int a, int b)

{
//IMPONIAMO NUMERI DECIMALI SEPARATI DA UNO SPAZIO	
////48 E' IL CORRISPETTIVO DI 0 IN ASCII			...[00].[00]...
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	
	
}

void	ft_print_comb2(void)
//DEFINIAMO a E b COME interi				...[aa].[bb]...
{
	int a;
	int b;
//CREIAMO UN LOOP DA 0 A 99 ED DEFINIAMO IN MANIERA SCALARE a E b
		a = 0;
		while(a <= 99)
		{
			b = a + 1;
			while(b <= 99)
			{
//RICHIAMIAMO LA FUNZIONE ft_write PER DEFINIRE LA FORMA IMPOSTATA GRAZIE A ft_putchar
//									...[12].[34]...
				ft_write(a, b);
				if(a <= 97)
				write(1, ", ", 2);	
				b++;
			}
		a++;
		}
}

/*
int	main(void)

{

	ft_print_comb2();
	return 0;
}
*/
//M3DD1J
