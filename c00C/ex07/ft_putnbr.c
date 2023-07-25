//01111111111111111111111111111111 O 2147483647 E' IL NUMERO POSITIVO PIU' GRANDE CHE ENTRA IN 32 BIT DI MEMORIA
//11111111111111111111111111111111 O 2147483648 E' IL NUMERO NEGATIVO PIU' GRANDE CHE ENTRA IN 32 BIT DI MEMORIA
//GOOGLA Y2038
#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
//QUI PROVO A DIMOSTRARE IL LIMITE DI 2147483647 MA L'OUTPUT RESTA 0
//IMPOSTANDO ft_putnbr NEL main() OLTRE 2147483647 SI AVRA' UN PROBLEMA DI MEMORIA GENERANDO UN CRASH ->(CTRL+Z C:)
{
	if(n >= 2147483647 && n == 0)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
//QUI IMPOSTIAMO LA GESTIONE DEI NUMERI NEGATIVI IN OUTPUT AGGIUNGENDO IL SEGNO - QUANDO n E' MINORE DI 0
	else if(n <= 0)
	{
		ft_putchar('-');
	n = -n;
		ft_putnbr(n);
	}
//SE IL NUMERO RICHIESTO E' SUPERIORE A 9 OCCORRE INTERVENIRE CON I DECIMALI! 1/10/100/1000!!!	
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else 
//AGGIUNGO 0 AL RISULTATO ;D 
		ft_putchar(n + 48);
}
/*
int	main()
{
	ft_putnbr(42);
	return (0);

}
*/
//M3DD1J
