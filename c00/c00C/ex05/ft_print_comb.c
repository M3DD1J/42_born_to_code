#include <unistd.h>

void	ft_print_comb(void)

{
//PER CREARE UNA SERIE DI VALORI DEFINIREMO TRE CARATTERI [a][b][c] CHE SI RIPETERA'
	char a;
	char b;
	char c;

	a = '0';
//DOPO DEFINITO a ANDREMO AD ASSEGNARGLI UN VALORE PER POI INIZIARE UN LOOP [[a...
	while(a <= '7')	
	{
//MENTRE a E' MINORE UGUALE A 7 DEFINIAMO CHE b E' UGUALE A a + 1
//IN QUESTO MODO b SARA' SEMPRE PIU' GRANDE DI a
		b = a + 1;
//SIAMO NEL LOOP A E LA FESTA E' APPENA INIZIATA!	CREIAMO IL LOOP B [[a.[b...		
	while(b <= '8' )
//CREIAMO UN LOOP B CHE ASSEGNI UN VALORE SCALARE A c
		{	
//IL RAPPORTO TRA I NUMERI E SCALARE
//QUINDI c E' UGUALE A b + 1
		c = b + 1;
		
	while(c <= '9')
//L'ULTIMO CICLO NON PREVEDE LA CENTRIFUGA
//CREIAMO UN LOOP C DOVE ANDREMO A DEFINIRE COSA SCRIVERE		 [[a.[b.[c..
			{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
//QUESTO if IMPONE CHE SE IL VALORE a HA RAGGIUNTO IL SUO TRAGUARDO NON DOVRA' STAMPARE LA VIRGOLA
				if(a != '7')
				write(1, ", ", 2);
				c++;			
//SIAMO NEL FONDO DEL LOOP| RICORDA DI AUMENTARE IL PROPRIO VALORE c++    [[a][b][c]]...W3LL D0N3!...
 			}
//OGNI VALORE DEVE ESSERE AUMENTATO ALLA FINE DEL PROPRIO LOOP!
//RICORDA DI ASSEGNARE AD OGNI INCREMENTO LA POSIZIONE GIUSTA!
		b++;
		}
	a++;
//MODIFICARE I VALORI AD INIZIO LOOP [ { ] MODIFICA ANCHE IL RISULTATO OTTENUTO 
	}
//FINE--|
}

 
/*
int	main()

{
	ft_print_comb();
	return 0;
}
*/
//M3DD1J
