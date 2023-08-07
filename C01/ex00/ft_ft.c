#include <unistd.h>
//#include <stdio.h> <--- LA FUNZIONE printf() FUNZIONA SOLO NELLA LIBRERIA stdio
//GLI OPERATORI DI DEREFERENZIAMENTO:	"*"	DEREFERENZIAZIONE
//GLI OPERATORI DI   REFERENZIAMENTO	"&"       REFERENZIAZIONE
//UN ESEMPIO DI DICHIARAZIONE: *pointer
//
//DICHIARIAMO>int *p< PER DARE UN ARGOMENTO ALLA FUNZIONE!
//
void	ft_ft(int *p)
{
//IL PUNTATORE DICHIARA IL TIPO DI OGGETTO ALLA QUALE PUNTA:
	*p = 42; 
}
///////|---->[]| IL PUNTATORE p PUNTA IL VALORE 42	<-------------------------------------------------\
///// LA NOSTRA FUNZIONE E' CONCLUSA!                                                                     |
///													  |
//													  |
//LA NOSTRA FUNZIONE E' CONCLUSA									  |
//c r e d o CHE L'UNICA LIBRERIA AMMESA SIA unistd QUINDI NON POSSIAMO INSERIRE printf() IN FUNZIONE	  |
//IL RESTO LO INSERIAMO NEL MAIN ---->									  |
/*													  |
|													  |
| int	main()												  |
| {													  |
| -DICHIARIAMO UNA VARIABILE int n 									  |
| int	n;												  |
| int	*p;												  |
| -DICHIARIAMO ANCHE IL PUNTATORE *p COLLEGATO ALLA FUNZIONE ft_ft(int *p)				  |
|	p = &n;												  |
| -OLTRE IL PUNTATORE POSSIAMO ACCEDERE ALLA VARIABILE p 'INDIRIZZANDOLA' CON & ALLA VARIABILE n	  |
|	ft_ft(p);											  |
| -L\ARGOMENTO DI ft_ft() E' LA VARIABILE DEL PUNTATORE* p QUINDI IL VALORE '42'--------------------------/
|	printf("%d", n);  
|	      |"% " 	-|IL SIMBOLO '%' E' UNA SPECIFICAZIONE DI CONVERSIONE E SERVE A SELEZIONARE UN 
|	return(0);      -|FORMATO DEI CARATTERI.       AD ESEMPIO %d FA RIFERIMENTO AI NUMERI DECIMALI
|}
|		  
|			MA COSA INDICA '&'?          
|
|La dichiarazione di un puntatore include il tipo dell'oggetto a cui il puntatore punta.
|In C ogni variabile ha due tipi di valori:
|						una locazione e 
|						un valore contenuto in quella locazione. 
|L' operatore & (operatore unario, o monadico)
|fornisce l'indirizzo di una variabile.
|
|_______
//M3DD1J|
*/
