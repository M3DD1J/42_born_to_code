#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size) { // QUESTA RIGA DEFINISCE LA FUNZIONE ft_rev_int_tab che accetta
					    //  due parametri:
					   // un puntatore a un intero (int *tab) e un intero (int size).
					  ///////////////////////////////////////////////////////////////////////|
	int	start = 0; //QUI DEFINIAMO UNA VARIABILE CHIAMATA start E LA INIZIALIZZIAMO A 0.
			  //QUESTA VARIABILE CI AIUTERA' A TENERE TRACCIA DELL'INDICE INIZIALE DELL\ARRAY
			 ////////////////////////////////////////////////////////////////////////////////////////|
	int	end = size - 1; //QUI DEFINIAMO UNA VARIABILE CHIAMATA end E LA INIZIALIZZIAMO CON size - 1.
			       //QUESTA VARIABILE CI AIUTERA' A TENERE TRACCIA DELL'INDICE FINALE DELL\ARRAY
			      ///////////////////////////////////////////////////////////////////////////////////|
	int	temp; //QUI DEFINIAMO UNA VARIABILE TEMPORANEA CHIAMATA temp 
		      //CHE USEREMO PER SCAMBIARE VALORI DURANTE L'INVERSIONE
	while (start < end) { //QUESTA RIGA INIZIA UN CICLO while CHE CONTINUERA' FINCHE' start E' MINORE DI end
			     //QUESTO CI ASSICURA DI INVERTIRE SOLO LA META' DELL\ARRAY
			    /////////////////////////////////////////////////////////////////////////////////////|
		temp = tab[start]; //QUI MEMORIZZIAMO IL VALORE DELL\ELEMENTO ALL\INDICE start NELLA VARIABILE 
				  //TEMPORANEA temp
				 ////////////////////////////////////////////////////////////////////////////////|
		tab[start] = tab[end]; //QUI ASSEGNIAMO IL VALORE DELL\ELEMENTO ALL\INDICE end ALL\ELEMENTO end
			              //ALL\ELEMENTO ALL\INDICE start
				     //SOVRASCRIVENDO IL VALORE PRECEDENTE DI tab[start]
				    /////////////////////////////////////////////////////////////////////////////|
		tab[end] = temp;   //QUI ASSEGNIAMO IL VALORE MEMORIZZATO NELLA VARIABILE TEMPORANEA temp
				  //ALL\ELEMENTO ALL\INDICE end
		start++;	 //INCREMENTIAMO L\INDICE start PER SPOSTARCI ALL\ELEMENTO SUCCESSIVO NELL\ARRAY
		end--;		//DECREMENTIAMO L\INDICE end PER SPOSTARCI ALL\ELEMENTO PRECEDENTE NELL\ARRAY
			       //////////////////////////////////////////////////////////////////////////////////|
	}		      ////////___   ___  ___  __  __  _  ___
			     ////////|   \ /   || __||  \|  \| ||_ _|
			    /////////| |\ V /| || _| | D|| D|| | | |
			   //////////| |_\_/_|_||___||__/|__/|_|_| |
			  ///////////|_____________________________|

//	NO -W -W -W
/*
#include <stdio.h>
void	print_array(int *arr, int size) {
	
	int i = 0;
	while (i < size) {
		int	num = arr[i];
		char c = num + '0';
		write(1, &c, 1);
			i++;
	}
	write(1, "\n", 1);
}

int	main()

{
	int a[5] = {1, 2, 3, 4, 5};
	print_array(a, 5);
	ft_rev_int_tab(a, 5);
	print_array(a, 5); 
	return (0);
}
*/
//M3DD1J
