#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/** \brief Muestra menu de opciones
 *
 * \param numeroA float Es el 1er valor ingresado por el usuario y se muestra en el menu de opciones
 * \param numeroB float Es el 2do valor ingresado por el usuario y se muestra en el menu de opciones
 * \return void No retorna nada ya que solo muestra opciones.
 *
 */
void Menu(float numeroA, float numeroB);

/** \brief Segun la opcion obtenida se realiza el caso de switch.
 *
 * \param numeroA float El 1er valor ingresado por el usuario se utiliza para casos del switch.
 * \param numeroB float El 2do valor ingresado por el usuario se utiliza para casos del switch.
 * \return void
 *
 */
void realizarSwitch( float numeroA, float numeroB);

/** \brief Obtener numeros
 *
 * \param numero float Numero cargado actualmente.
 * \param mensaje[] char Mensaje de ingreso de valor.
 * \return float Numero obtenido al ingreso del usuario.
 *
 */
float obtenerNumero(float numero, char mensaje[]);


/** \brief Muestra mensaje según funcion solicitada.
 *
 * \param msj[] char Mensaje de resultado a mostrar.
 * \param valor float valor de resultado a mostrar.
 * \return void no retorna ya que solo informa datos.
 *
 */
void mensaje(char msj[], float valor);

/** \brief Realiza la suma de valores ingresados.
 *
 * \param 'numeroA' es el 1er valor ingresado por el usuario.
 * \param 'numeroB' es el 2do valor ingresado por el usuario.
 * \return Retorna valor de la adicion de ambos valores.
 *
 */
float funcionSuma (float numeroA, float numeroB);

/** \brief Realiza la resta de valores ingresados.
 *
 * \param 'numeroA' es el 1er valor ingresado por el usuario.
 * \param 'numeroB' es el 2do valor ingresado por el usuario.
 * \return Retorna valor de la diferencia de ambos valores.
 *
 */
float funcionResta (float numeroA, float numeroB);

/** \brief Realiza la division de los valores ingresados.Si el valor B es igual a cero, se da un mensaje de ERROR.
 *
 * \param 'numeroA' es el 1er valor ingresado por el usuario.
 * \param 'numeroB' es el 2do valor ingresado por el usuario.
 * \return Retorna valor del cociente de ambos valores.
 *
 */
float funcionDivision (float numeroA, float numeroB);

/** \brief Realiza la multiplicacion de los valores ingresados.
 *
 * \param 'numeroA' es el 1er valor ingresado por el usuario.
 * \param 'numeroB' es el 2do valor ingresado por el usuario.
 * \return Retorna valor del producto de ambos valores.
 *
 */
float funcionMultiplicacion (float numeroA, float numeroB);

/** \brief Realiza validacion de si es un valor entero.
 *         De ser verdad se multiplica todos los numeros anteriores al numero seleccionado hasta llegar a 1
 *
 * \param  Valor a validar de ser entero y luego factorearlo.
 * \return Retorna el factorial del valor
 *
 */
int funcionFactorial (float numero);

#endif // FUNCIONES_H_INCLUDED
