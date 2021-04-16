
#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main (void)
{
  float numeroA=0;
  float numeroB=0;

  Menu (numeroA, numeroB);/**< Se muestra el menu con los datos A y B en  */
  realizarSwitch(numeroA,numeroB);/**< Según la opcion elegida se realiza una funcion*/
  system ("clear");

  return 0;
}
