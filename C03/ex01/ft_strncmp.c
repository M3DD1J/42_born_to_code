#include <unistd.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	// n E' IL NUMERO DI CARATTERI DA ANALIZZARE
	i = 0; // QUINDI i < n
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	if ( i == n) // SE INCONTRIAMO DUE CARATTERI DIVERSI, RESTITUIAMO LA DIFFERENZA
		     return 0; // TRA I LORO VALORI ASCII COME RISULTATO.
			      // SE LE STRINGHE SONO UGUALI FINO AL CARATTERE n-esimo
			     //RESTITUIREMO 0;
			    //
			   //
			  //|SE UNA DELLE STRINGHE E' PIU' CORTA DELL\ALTRA MA I PRIMI n CARATTERI
			 // |NELLA POSIZIONE n DELLA STRINGA PIU' LUNGA E UN CARATTERE NULLO
	return s1[i] - s2[i];
}
#include <stdio.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Bonjour";
	char str4[] = "Bonjourno";
	char str5[] = "Hello, World!";

	int result1 = ft_strncmp(str1, str2, 5); // CONFRONTA I PRIMI 5 CARATTERI
	int result2 = ft_strncmp(str1, str3, 5); // 
	int result3 = ft_strncmp(str3, str4, 7); // CONFRONTA I PRIMI 7 CARATTERI
	int result4 = ft_strncmp(str4, str5, 3); // CONFRONTA I PRIMI 3 CARATTERI
	int result5 = ft_strncmp(str5, str1, 8); // CONFRONTA I PRIMI 8 CARATTERI
	
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);
	printf("Comparing \"%s\" and \"%s\": %d\n", str3, str4, result3);
	printf("Comparing \"%s\" and \"%s\": %d\n", str4, str5, result4);
	printf("Comparing \"%s\" and \"%s\": %d\n", str5, str1, result5);
	
	return 0;
}

