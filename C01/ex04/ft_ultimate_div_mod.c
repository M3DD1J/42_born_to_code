#include <unistd.h>
#include <stdio.h>
//	CREIAMO UNA FUNZIONE CON ARGOMENTI DUE PUNTATORI: *a E *b
//	                  
void	ft_ultimate_div_mod(int *a, int *b)

{
//	LE VARIABILI CONSERVERANNO I DATI DELL'OPERAZIONE TRA I DUE PUNTATORI *a E *b
	int div;
	int mod;

// 	INDIRIZZIAMO div SU *a E mod SU *b
	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;	
//	IL PUNTATORE *a DIVENTERA' IL RISULTATO DELL'OPERAZIONE DI DIVISIONE
//	MENTRE *b DIVENTERA' IL RESTO
}

int	main()

{
	int x;
	int y;
//	CREIAMO DUE VARIABILI x E y	
	x = 30;
	y = 5;

//	QUESTA E' BELLA! 
//	x E y SONO VARIABILI CON DEI VALORI IMPOSTATI IN PRECEDENZA
//	ESEGUENDO printf() PRIMA DI AVVIARE LA FUNZIONE IL RISULTATO
//	SARA' QUELLO TRASCRITTO IN PRECEDENZA..
	printf("%d : %d = ", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d $$ %d", x, y);
//	printf() DOPO L'AVVIO DELLA FUNZIONE ft_ultimate_div_mod CON ARGOMENTI
//	x E y STAMPERA' I RISULTATI PASSATI PER *a E *b 
	return (0);
}
//M3DD1J
