#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float operandoDato();

/** \brief Esta funcion pide dos datos para realizar las operaciones
 *
 * \param Primer numero de tipo flotante
 * \param Segundo numero de tipo flotante
 * \return Recibe los dos numeros ingresados
 *
 */


float suma(float a, float b);

/** \brief Esta funcion suma los dos numeros ingresados
 *
 * \param Primer parametro es a, donde ingrese un numero para que lo reciba y después lo sume
 * \param Segundo parametro es b, donde ingrese el segundo numero para que lo reciba y después lo sume
 * \return Entrega la suma de a y b
 *
 */


float resta(float a, float b);

/** \brief Esta funcion resta los dos numeros ingresados
 *
 * \param Primer parametro es a, donde ingrese un numero para que lo reciba y después lo reste
 * \param Primer parametro es b, donde ingrese un numero para que lo reciba y después lo reste
 * \return Entrega la resta de a y b
 *
 */

float division(float a, float b);

/** \brief Esta funcion divide los dos numeros ingresados
 *
 * \param Primer parametro es a, donde ingrese un numero para que lo reciba y después lo divida
 * \param Primer parametro es b, donde ingrese un numero para que lo reciba y después lo divida
 * \return Entrega la division de a y b
 *
 */

float multiplicacion(float a, float b);

/** \brief Esta funcion multiplica los dos numeros ingresados
 *
 * \param Primer parametro es a, donde ingrese un numero para que lo reciba y después lo multiplique
 * \param Primer parametro es b, donde ingrese un numero para que lo reciba y después lo multiplique
 * \return Entrega la multiplicacion de a y b
 *
 */

long long int factorizacion (float a);

/** \brief Esta funcion saca el factorial del primer numero ingresado (A)
 *
 * \param Primer parametro es a, donde ingrese un numero para que lo reciba y después saque su factorial
 * \param Este parametro no es pedido por el trabajo practico
 * \return Entrega la factorizacion de a
 *
 */

#endif // FUNCIONES_H_INCLUDED
