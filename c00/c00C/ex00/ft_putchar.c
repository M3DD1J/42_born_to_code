//INCLUDIAMO LA LIBRERIA UNISTD
#include <unistd.h>
//RICHIAMO UNA FUNZIONE CON INCLUSO LA VARIABILE DI TIPO CARATTERE char E LA NOMINO c
void	ft_putchar(char c)

{
//CHIEDIAMO ALLA NOSTRA VARIABILE DI SCRIVERE CON write COMPILANDO LA FORMA ( tipo: INPUT\OUTPUT, COLLEGHIAMO IL 
//NOSTRO CARATTERE c GRAZIE AD IL SIMBOLO &, INFINE QUI IMPOSTIAMO IL NUMERO DI CARATTERI DA UTILIZZARE IN UNA VOLTA
	write(1, &c, 1);

}

//UTILIZZANDO int AD INIZIO RIGA POSSO CREARE UN PROGRAMMA, QUESTO E' DEFINITO GRAZIE A main()
//RIMUOVENDO / * E * / DA SOPRA E SOTTO POTRAI TESTARE LA NOSTRA FUNZIONE ft_putchar!
//
//N.B.		void SIGNIFICA nulla ED E' PER QUESTO CHE PUO' NON ESSERE DEFINITO!
//
/*
int	main(void)
{
	ft_putchar('c');		
	return (0);

}
*/
//M3DD1J