/*
 * main.c
 *
 *  Created on: Apr 6, 2011
 *      Author: tec
 *      This code is licensed under GNU/ GPL
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
      /*
       C vorlesung 23 4  2010
      Operanden + Operatoren
      Operanden = Daten
      Operator = Gibt an, was mit den Daten geschieht.

      -> Mathematische Operanden
      -------------------------------

      Mathematisch   |   in C
                     |
      +              |      +
      -              |      -
      *              |      *    ( Caps & +)
      :              |      /    ( Caps & 7 )
      mod            |      %   !!! MOD
      Vorzeichen + - |     + -     -4 * 3  im Zweifel Klammern -1 *(4 * 3)
      Vorrangregeln  |   Wie in der Mathematik
                     |

       Mathematische Bibliothek  #include <math.h>
       -------------------------------
        ->  erweiterte Mathematische Funktionen
             <>  Datentyp der Funktionen :  double

           ->  trigonometrische Funktionen  sin() ; cos() ; tan ();

           ->  Potenzen pow(), Wurzeln sqrt() , Logarithmen ln()

           Bsp1      double c = sqrt(10);
                     printf (" Wurzel 10 = %f"c);
           Bsp2      printf (" Wurzel 10 = %f",sqrt(10));

       Anweisung (Statement)
       -------------------------
          -> ein Schritt im Programm (;)!!
          -> eine Blockanweisung : { Block }
                           geschweifte Klammern (AltGr & 7 ;  AltGr & 0  )
          Ausdruck (Expression)              |  Typumwandlung (Typ-)Casting
          --------------------------         |  int wert ;
          z.B     4                          |  wert = (int)sqrt (10);
                 -4                          |
                 a*(b + 11)/20               |
                 a                           |
          - Wert
          - Operanden + Operatoren

       Konstanten : PI (Gro�schreibung)
       ----------------------
       const double Pi = 3.14157923

       Funktionen in C
       ----------------------
       4 Typen   :                       Funtionen
                                        /         \
                           mit Argumenten          ohne Argumente
                          /     \                    /         \
       R�ckgabe:       mit      ohne               mit         ohne
                                  |                            (Subroutine   )
                            Siehe Bsp 2                        (Unterprogram)

          Z.B  Strukturiertes Programm :
         ----------------------------------------
               #include <stdio.h>
               int main ()
               {
                   Newline();
                   printf (" Hello ");
                   Newline();
               }

               void Newline (void)
                                  / * Meine eigene Zeilensprung-Funktion * /
               {
                   printf ("\n");
               }

         Bsp 2
               #include <stdio.h>
               int main ()
               {
                     Addition(3,5);
               }

               void Addition (int A, int B)
                                   / * Meine eigene Addier-Funktion * /
               {
                    printf("%i",A+B);
               }


      */
      int wert;
      printf ("Wurzel 10 = %f\n",sqrt(10));
      wert = (int)sqrt (10);
      printf ("Wurzel 10 = rund  %i\n", wert);
      return (EXIT_SUCCESS);
}
