#include <stdio.h>
//RICORDA CHE UN PUNTATORE E' DENOMINATO DAL SIMBOLO *
//UN ESEMPIO DI DICHIARAZIONE: *pointer
void	ft_ft()

{
//IL PUNTATORE DICHIARA IL TIPO DI OGGETTO ALLA QUALE PUNTA:
	int	*p;
////////int  <--*pointer| LO VEDI PUNTARE???
	int	n;
//DICHIARIAMO ANCHE UNA VARIABILE E LA DENOMINIAMO n
	p = &n;
///////|CON   &  POSSIAMO COLLEGARE IL NOSTRO PUNTATORE A n
	*p = 42;
//
//CON   printf  POSSIAMO STAMPARE DEFINENDO ->|(formato di riferimento, lista degli argomenti..)
	printf( "%d", n);
//IL FORMATO O   %  DEFINISCE A QUALE TIPO DI OGGETTO FARE RIFERIMENTO: NUMERO DECIMALE >> int >> d
}

/*
int	main(int n)
{
	ft_ft(n);
}
*/
//M3DD1J
