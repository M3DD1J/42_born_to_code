#include <unistd.h>	/		     //CONVERSIONE ASCII ESTESO [0\256] SONO 129 CARATTERI IN PIU'!

void	ft_putstr_non_printable(char *str) //LA FUNZIONE ft_putstr_non_printable
{					  //CONVERTE I CARATTERI NON STAMPABILI
	int	i;			 //IN ESADECIMALI [lowcase]
					//LA CONVERSIONE IN ESADECIMALI
	i = 0;			       //AVVIENE CALCOLANDO SEPARATAMENTE I PRIMI 4 bit E GLI ULTIMI 4 bit
	while (str[i] != '\0')	      //DEL VALORE ESADECIMALE DEL CARATTERE E POI UTILIZZANDO LA STRINGA
	{			     ////////////////"0123456789abcdef" PER OTTENERE I CORRISPONDENTI
		if (str[i] >= 32 && str[i] <= 126 || str[i] >= 128)//IN CARATTERI ESADECIMALI!
		{				 //SE IL CARATTERE E' COMPRESO TRA I CARATTERI STAMPABILI
			write(1, &str[i], 1);   //SCRIVI IL CARATTERE DELLA STRINGA
		}			       //
		else			      //NEL CASO IL CARATTERE TROVATO NON FOSSE COMPRESO TRA I  
		{			     //CARATTERI STAMPABILI [32 <-> 126]
			write(1, "\\", 1);  //SCRIVI backslash
			char hex[2];       ////////////////////////IN QUESTO MODO GESTIAMO I CARATTERI
			hex[0] = "0123456789abcdef"[*str / 16]; //ESADECIMALI E CONVERTIAMO I VALOR
			hex[1] = "0123456789abcdef"[*str % 16];//I CARATTERI ESADECIMALI SONO:
			write(1, hex, 2);		      //10 CARATTERI NUMERICI: 0123456789
		}					     //6 CARATTERI ALFABETICI lowcase: abcdef
		i++;					    //QUESTA E' LA MANIERA CORRETTA PER GESTIRE GLI ESADECIMALI
	}						   //DIFFERENTEMENTE POTREMMO CONVERTIRLI IN SCRITTURA
}							  //write(1, &"0123456789abcdef"[str[i] / 16], 1);
							 //write(1, &"0123456789abcdef"[str[i] % 16], 1);
///////////////////////////////////////////////////////////M3DD1J
#include <stdio.h>

int	main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Coucoun tu v\aas bien ?";
	char str3[] = "Test\x7Fstringa";
	
	printf("Stringa originale 1 -> %s\n\t", str1);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str1);
	printf("\n\n");
	
	printf("Stringa originale 2 -> %s\n\t", str2);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str2);
	printf("\n\n");
	
	printf("Stringa originale 3 -> %s\n\t", str3);
	printf("<- Stringa modificata");
	ft_putstr_non_printable(str3);
	printf("\n\n");
	return 0;
}                 	
