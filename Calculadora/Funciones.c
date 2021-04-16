#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void Menu (float numeroA, float numeroB)
{
  printf ("\n\nBIENVENIDO A LA CALCULADORA\n\n");
  printf ("  Seleccione una opcion  \n\n");
  printf ("1) Ingresar 1er valor (A= %.2f ) \n", numeroA);/**< Se muestra el valor cargado en A hasta el momento */
  printf ("2) Ingresar 2do valor (B= %.2f ) \n", numeroB);/**< Se muestra el valor cargado en B hasta el momento */
  printf ("3) Calcular todas las operaciones.");
  printf ("\n 		a) Calcular la suma (A+B)");
  printf ("\n		b) Calcular la resta (A-B)");
  printf ("\n 		c) Calcular la division (A/B)");
  printf ("\n		d) Calcular la multiplicacion (A*B)");
  printf ("\n 		e) Calcular el factorial (A! B!)");
  printf ("\n4) Informar resultados \n");
  printf ("5) Salir\n\n");
}

float obtenerNumero (float numero, char mensaje[])
{
  float numeroAuxiliar;
  printf ("%s", mensaje);
  fflush(stdin);
  scanf ("%f", &numeroAuxiliar);
  return numeroAuxiliar;
}

void realizarSwitch( float numeroA, float numeroB){

  int opcionElegida;
  float operacionSuma;
  float operacionResta;
  float operacionMultiplicacion;
  float operacionDivision;
  int factorialA;
  int factorialB;
  int comprobacionIngresoA=0;
  int comprobacionIngresoB=0;
  int comprobacionCaso3=0;

  do{

opcionElegida= obtenerNumero(opcionElegida,"Ingrese opcion: ");
system("clear");

switch (opcionElegida)
	{
	case 1:
	  numeroA = obtenerNumero (numeroA,"\nEligio la 1ra opcion\nIngrese primer valor: ");
      system("clear");
	  Menu (numeroA, numeroB);
	  comprobacionIngresoA=1;/**< Se verifica que se haya cargado un valor en numeroA */
	  break;

	case 2:
	  numeroB = obtenerNumero (numeroB,"\nEligio la 2da opcion\nIngrese segundo valor: ");
	  system("clear");
  	  Menu (numeroA, numeroB);
	  comprobacionIngresoB=1;/**< Se verifica que se haya cargado un valor en numeroB */
	  break;

	case 3:
    if (comprobacionIngresoA==1 && comprobacionIngresoB==1){/**< Si ambos valores se ingresaron se realiza el switch 3 */
      printf(" \nSe han realizado todas las operaciones. si desea conocer el resultado elija la opcion 4.\n");
	  Menu (numeroA, numeroB);
	  operacionSuma = funcionSuma (numeroA, numeroB);
	  operacionResta = funcionResta (numeroA, numeroB);
	  operacionMultiplicacion = funcionMultiplicacion (numeroA, numeroB);
	  operacionDivision = funcionDivision (numeroA, numeroB);
	  factorialA = funcionFactorial (numeroA);
	  factorialB = funcionFactorial (numeroB);
      comprobacionCaso3=1;/**< Se comprueba que se haya hecho el calculo de los valores. */
    }else if (comprobacionIngresoA==0 && comprobacionIngresoB==1){
        numeroA = obtenerNumero (numeroA,"\nERROR! no ingreso ningun 1er valor.\nIngrese primer valor: ");
        comprobacionIngresoA=1;
        system("clear");
        Menu (numeroA, numeroB);
    }else if(comprobacionIngresoA==1 && comprobacionIngresoB==0) {
        numeroB = obtenerNumero (numeroB,"\nERROR! no ingreso ningun 2do valor.\nIngrese segundo valor: ");
        comprobacionIngresoB=1;
        system("clear");
        Menu (numeroA, numeroB);
    }else{
        Menu (numeroA, numeroB);
        printf("\nERROR! Usted no cargo ningun valor en A o B .\n");
    }

      fflush(stdin);
	  break;

	case 4:
     if (comprobacionIngresoA==1 && comprobacionIngresoB==1 && comprobacionCaso3==1){
            mensaje("\nEl resultado de la suma es: ", operacionSuma);
            mensaje("El resultado de la resta es: ", operacionResta);
            mensaje("El resultado de la multiplicacion es: ", operacionMultiplicacion);

            if (operacionDivision == 0){
                mensaje("No se puede dividir por cero. B= ", numeroB);
                }else{
                      mensaje("El resultado de la division es: ", operacionDivision);
                     }

            if (factorialA==0 || factorialA==-1){
                mensaje("No se puede calcular el factorial de un numero con coma o negativo. A=", numeroA);
                }else{
                      mensaje ("El factorial de A es: ", factorialA);
                     }

            if (factorialB==0 || factorialB==-1)
            {
            mensaje("No se puede calcular el factorial de un numero con coma o negativo. B=", numeroB);
            }else{
                    mensaje ("El factorial de B es: ", factorialB);
                    }
                int c=getchar();
                system("clear");
                Menu (numeroA, numeroB);

     }else if (comprobacionIngresoA==0 || comprobacionIngresoB==0){
        Menu (numeroA, numeroB);
        printf("\nERROR! Usted no cargo ningun valor en A o B .\n");
     }else if(comprobacionCaso3==0){
        Menu(numeroA, numeroB);
        printf("\nERROR! Usted no realizo el calculo de los valores.\n");
     }
	  break;

	case 5:
      printf("\nUsted eligio la opcion de salir de la calculadora.Hasta luego.\n\n");
      system("pause");
	  break;
    default:
        Menu (numeroA, numeroB);
        mensaje("ERROR! Eso no es una opcion:",opcionElegida);
        break;
	  }
  }while (opcionElegida != 5);
}
void mensaje(char msj[], float valor) {
    printf("%s %.2f\n\n", msj, valor);
}


float funcionSuma (float numeroA, float numeroB){

  float operacionSuma;

  operacionSuma = (numeroA) + (numeroB);

  return operacionSuma;
}

float funcionResta (float numeroA, float numeroB){

  float operacionResta;

  operacionResta = (numeroA) - (numeroB);

  return operacionResta;
}

float funcionDivision (float numeroA, float numeroB){

  float operacionDivision;
  int retorno;

  if(numeroB != 0){
        operacionDivision = numeroA / numeroB;
        retorno=operacionDivision;
        } else {
                retorno=0;
               }
    return retorno;
}

float funcionMultiplicacion (float numeroA, float numeroB){

  float operacionMultiplicacion;

  operacionMultiplicacion = numeroA * numeroB;

  return operacionMultiplicacion;
}

int funcionFactorial (float numero){

  int factorial;
  long int factor = 1;

  if (numero== (int) numero && numero>=0)
    {
      for (factorial = numero; factorial > 0; factorial--){
            factor = factor * factorial;
            }return (factor);
    }else if (numero<0){
             return -1;
                }else{
                      return 0;
                     }

}

