/*
 ============================================================================
 Name        : primzahlen.c
 Author      : Bjoern Heller
 Version     :
 Copyright   : This code is licensed under GNU/ GPL
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int grenze = 300000; //Obere Grenze für Primzahlsuche
int zaehler = 2; //Aktuelle Zahl die überprüft wird
int izaehler; //Interne Zählvariable(Wird durch "zaehler" geteilt um ganzzahligen Rest zu eritteln)

int main(void)
{
    for(zaehler;zaehler <= grenze;zaehler++) //Alle Zahlen von Anfangszähler bis zur Grenze überprüfen
    {
        for(izaehler = (zaehler-1);zaehler%izaehler;izaehler--) //Schleife die so lange läuft, bis die Modulo-Operation 0 liefert
        {}
        if(izaehler == 1) //Wenn "zaehler" nur durch 1 den Rest 0 hat, dann ist "zaehler" eine Primzahl
        {
            printf("%i\n",zaehler); //Ausgbe
        }
    }
    getchar(); //Waret mit dem Schließen des Fensters bis ENTER gedrückt wird
    return 0;
}
