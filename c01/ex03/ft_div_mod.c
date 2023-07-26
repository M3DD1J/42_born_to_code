#include <stdio.h>
//INIZIAMO DEFINENDO I VALORI ED I PUNTATORI
void	ft_div_mod(int a, int b, int *div, int *mod)

{
//RICORDIAMOCI CHE NON SEMPRE IL RISULTATO E' PLAUSIBILE!
	if (b != 0)
	{
//IL PUNTATORE div RACCOGLIE IL RISULTATO DI a DIVISO b
		*div = a / b;
		*mod = a % b;
//IL PUNTATORE mod RACCOGLIE LA DIFFERENZA DI a DIVISO b
	}
	else 
		printf("ERROR: You can't divide by 0!\n");
}

int	main()

{
	int a;
	int b;
	int mod;
	int div;

	a = 10;
	b = 3;
//ABBIAMO LEGATO -> & A div E mod [&div] E [&mod] 
	ft_div_mod(a, b, &div, &mod);
//ORA POSSIAMO STAMPARE I RISULTATI!
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("a / b = %d\n", div);
	printf("il resto è %d\n", mod);
}
//M3DD1J
