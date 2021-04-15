/*
 * funciones.h
 *
 *  Created on: 8 abr. 2021
 *      Author: BiT_SOLUCIONES_iT
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief Carga el numero A y B
 * \param carga el primer numero
 * \return retorna el primer numero
 */
float CargarNumerosAYB (void);


/** \brief Suma dos numeros
 *
 * \param ingresa el primer numero a sumar
 * \param ingresa el segundo numero a sumar
 * \return resultado de la suma
 *
 */
float suma (float, float);



/** \brief Resta dos numeros
 *
 * \param primer numero a restar
 * \param segundo numero a restar
 * \return retorna el resultado de la resta
 *
 */
float resta (float, float);



/** \brief multiplica dos numeros
 *
 * \param float
 * \param float
 * \return retorna el resultado de la multiplicacion
 *
 */
float multiplicacion(float, float);

/** \brief Divide dos numeros
 *
 * \param primer numero
 * \param segundo numero
 * \return resultado
 *
 */
float division (float, float);


/** \brief realiza el factorial de un numero
 *
 * \param numero que va a ser factorizado
 * \return resultado de la factorizacion
 *
 */
int factorialNumero(float);


#endif /* FUNCIONES_H_ */
