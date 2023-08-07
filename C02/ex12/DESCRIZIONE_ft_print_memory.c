/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:22:53 by rgambard          #+#    #+#             */
/*   Updated: 2023/08/06 01:10:02 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) //QUESTA FUNZIONE STAMPA UN
{			  //SINGOLO CARATTARE SULLA CONSOLE
	write(1, &c, 1); //UTILIZZANDO LA FUNZIONE WRITE!
}                       /////////////////
void	ft_print_hex(unsigned char c) //QUESTA FUNZIONE CONVERTE UN CARATTERE c
{				     //IN UN VALORE ESADECIMALE [lowercase]
	char	*hex;		    //E STAMPA LE DUE CIFRE ESADECIMALI 
	hex = "0123456789abcdef";  //CORRISPONDENTI SULLA CONSOLE 
	ft_putchar(hex[c / 16]);  //UTILIZZANDO LA FUNZIONE ft_putchar()
	ft_putchar(hex[c % 16]); //[0123456789abcdef] SONO I CARATTERI ESADECIMALI
}				///////////
void	ft_print_ascii(unsigned char c) //QUESTA FUNZIONE STAMPA UN CARATTERE ASCII c
{				       //SULLA CONSOLE SE RIENTRA NEL RANGE DEI
	if (c >= 32 && c <= 126)      //CARATTERI STAMPABILI	
	        ft_putchar(c)	     //VALORE ASCII DA 32 A 126
	else			    //ALTRIMENTI STAMPA UN PUNTO PER RAPPRESENTARE
		ft_putchar('.');   //UN CARATTERE NON STAMPABILE 
}				  /////////////////////////////////////////////
void	ft_print_line(unsigned char *ptr, unsigned int size, unsigned int i)//
{					       //////////////////////////////
	unsigned int	j;		      //QUESTA FUNZIONE STAMPA UNA RIGA 
					     //DI 16 CARATTERI A PARTIRE 
	j = 0;				    //DALL'INDIRIZZO ptr + i 				 
	while (j < 16 && i + j < size)     //MOSTRANDO L'OUTPUT IN TRE "COLONNE"
	{				  //NELLA PRIMA COLONNA VENGONO STAMPATI
		ft_print_hex(ptr[i + j]);//I VALORI ESADECIMALI DEI CARATTERI
		if ((j + 1) % 2 == 0)	//NELLA SECONDA COLONNA VIENE INSERITO
		       ft_putchar(' ');//UNO SPAZIO OGNI DUE CARATTERI
		j++;		      //NELLA SECONDA COLONNA VIENE INSERITO
	}			     //UNO SPAZIO OGNI DUE CARATTERI
	ft_putchar(' ');	    //MENTRE NELLA TERZA COLONNA VENGONO
	j = 0;			   //////STAMPATI I CARATTERI ASCII
	while (j < 16 && i + j < size)//O PUNTO PER I CARATTERI
	{			     /////////NON STAMPABILI!
		ft_print_ascii(ptr[i + j]);//
		j++;			  //
	}				 //
	ft_putchar('\n');		//
}				       //////////////////QUESTA E' LA FUNZIONE PRINCIPALE
void	ft_print_memory(void *addr, unsigned int size)//CHE STAMPA L\AREA DI MEMORIZZAZIONE 
{				///////////////////////A PARTIRE DALL'INDIRIZZO addr
	unsigned char	*ptr;  //CONSIDERANDO UNA DIMENSIONE size IN byte
	unsigned int	i;    //LA FUNZIONE ESEGUE I SEGUENTI PASSI:
	unsigned int	j;   //////////1. INIZIALIZZA UN PUNTATORE ptr ALL\INDIRIZZO addr 
	ptr = (unsigned char *)addr;//PER SCORRERE L'AREA DI MEMORIA.
	i = 0;                     //2. UTILIZZA UN CICLO while CON UN INDICE i PER SCORRERE
	while (i < size)          //L'AREA DI MEMORIA E STAMPARNE IL CONTENUTO.
	{			 /////////////////////////////3. PER OGNI RIGA DI 16 CARATTERI,
		ft_print_hex((unsigned long long)addr + 1);//CHIAMA ft_print_hex PER STAMPARE 
		ft_putchar(':');			////I VALORI ESADECIMALI DEI CARATTERI
		if ((i + 16) <= size)		       //E ft_print_line PER STAMPARE IL CONTENUTO
			ft_print_line(ptr, size, i);  //DELLA RIGA.
		else				     //
		{				    //LA FUNZIONE ft_print_memory SUDDIVIDE IL PROCESSO
			j = 0;			   //////DI STAMPA IN RIGHE DI 16 CARATTERI E GESTISCE
			while (j++ < 16 - (size - i)) //LA STAMPA DELLE RIGHE PARZIALI SE size NON E'
				write(1, "   ", 3);  //UN MULTIPLO DI 16.
			ft_print_line(ptr, size, i);//IN QUESTO CASO VIENE AGGIUNTA UNA RIGA
		}				   //AGGIUNTIVA CON SPAZI PER ALLINEARE CORRETTAMENTE I DATI!
		i += 16;		          //
	}				         //
}					        //
/////////////////////////////////////////////////M3DD1J
#include <stdio.h>

int	main()
{
	char	str[] = "Bonjour les amin ches...c.estfou.tout.cequon ..lol.lol. .";
	ft_print_memory(str, sizeof(str) - 1);
	return (0);
}


