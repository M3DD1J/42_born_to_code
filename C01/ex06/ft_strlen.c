#include <unistd.h>
//ORA USIAMO int PER DICHIARARE LA NOSTRA FUNZIONE, PERCHE'?
//
//La differenza tra dichiarare una funzione con void e con un altro tipo di dato (come int)
// riguarda il valore di ritorno della funzione.
//
//A NOI SERVONO NUMERI intERI!
//
int	ft_strlen(char *str)

{	
//	NEL CASO LA STRINGA RESTI VUOTA 
	if (str == 0)
	{
		return (0);
	}
//	PREVENIRE E' MEGLIO CHE CURARE

	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

/*  Nella funzione ft_strlen, usiamo return len per restituire il valore della variabile len,
 *  che rappresenta la lunghezza della stringa str. 
 *  Quando chiamiamo una funzione con un valore di ritorno (in questo caso int),
 *  vogliamo catturare quel valore in una variabile nella funzione chiamante o utilizzarlo in qualche modo
 *  nel programma principale.
 */
  return len;
}

#include <stdio.h>

int	main()

{	
		
	char str[100] = "hello World!";	

//	int len = ft_strlen(str);
	int len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}
	
	
	printf("%d/100", len);
	return (0);
}
//M3DD1J
