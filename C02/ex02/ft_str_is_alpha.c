#include <unistd.h>

int	ft_str_is_alpha(char *str); 
				//  NOTA: IL TRAGUARDO E' STAMPARE 1 SE I CARATTERI PASSATI NELL\ARRAY SONO LETTERE 
{				//
	int i = 0;		// VARIABILE intero i [INFORMAZIONE]
				//
				//
	if (str[0] == '\0')	// SE//[LA STRINGA s CON VALORE 0 è UGUALE ALL\ULTIMO CARATTERE >>
	{			//	
		return (1);	// >> RESTITUISCO 1] 
	}			//
				//     --->[SE str NON HA CARATTERI TERMINA LA FUNZIONE ft_str_is_alpha]
				//
				//
				//  								  __   __   __   __
	while (str[i] != '\0')  // MENTRE//[L\ARRAY SCORRE INFORMAZIONI FINO L'ULTIMO CARATTERE  [i+] [__] [__] [\0]
				//
	{       ////| TUTTO IL RISULTATO VIENE INVERTITO >> SE i E' COMPRESO TRA 'A\a' A 'Z\z' >> SE i NON E' COMPRESO TRA 'A\a' E 'Z\z' |\\\\
		////|(---------------COMPRENDE ENTRAMBE LE RICHIESTE----------------------)|	 // _________________________________________
		////|---------------------------------------------------------------------------// >> IL PUNTO ESCLAMATIVO INVERTE TUTTO IL >>
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))   // >> RISULTATO DELL\OPERAZIONE DIVENTA QUINDI >>
		{	return (0);                                                       // >> SE IL VALORE CONTROLLATO NON E' UNA LETTERA >>
			i++;       // SCORRI AL PROSSIMO ARGOMENTO ->			  // >>                                   RITORNA 0 <<
		}		  //  SE i AVRA' RAGGIUNTO '\0' LA FUNZIONE ANDRA' AVANTII//
											  //
											  //  
											  // 
	}										  //
	return (1);	// SE LA FUNZIONE HA CONTROLLATO TUTTI I VALORI DI arr		  //  
			// TRAMITE i SENZA AVER TROVATO !LETTERE RITORNA 1		  //
}


