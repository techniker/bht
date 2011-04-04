/*
*  Programm liest einzelne Zeichen von der Tastatur
*  es wird untersucht, ob eine Ziffer eingegeben wurde
*
*  Author: Thomas Scheffler
*  Datum: 5.3.2011
*/
#include<stdio.h>
#include<stdlib.h>
  
int main (void) 
{
    char eingabe;

    printf("Geben Sie eine Ziffer auf der Tastatur ein:\n");
    eingabe = getchar();      

	if (isdigit(eingabe)) 
	   printf("Sie haben die Ziffer %c eingegeben.\n", eingabe);
    else 
        printf("Sie haben keine Ziffer eingegeben.\n");
    
    return EXIT_SUCCESS;
}