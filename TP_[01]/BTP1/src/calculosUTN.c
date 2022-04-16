/*
 * calculosUTN.c
 *
 *  Created on: 15 abr 2022
 *      Author: 54112
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculosUTN.h"
/**
 * \brief Funcion para realizar un descuento o aumento a un valor float
 * \param valor es el valor base al que se le realiza el descuento o aumento
 * \param porcentaje es el valor porcentual   del descuento(en negativo) o aumento(en positivo)
 * \return retorna el valor con el descuento o aumento realizado
 */
float UTN_descuentoAumento(float valor , float porcentaje){


	float resultado;



	resultado = valor + ((valor * porcentaje)/100);

	return resultado;

}

/**
 * \brief Funcion para convertir de pesos a Bitcoin
 * \param pesosArgentinos Es el valor en pesos
 * \return retorna el valor en Bitcoin
 *
 */

float UTN_conversionBitcoin(float pesosArgentinos){

	float resultado;

	resultado = pesosArgentinos / 460695.55;

	return resultado;
}
/**
 * \brief Funcion para calcular el precio por cada Kilometro
 * \param kilometros valor de kilometros totales
 * \param precioVuelo valor del precio total
 * \return retorna el valor por cada kilometro
 */
float UTN_precioPorKm (float kilometros, float precioVuelo){
	float resultado;

	resultado = precioVuelo/ kilometros;

	return resultado;


}

/**
 * \brief Funcion para calcular la diferencia entre dos valores
 */
float UTN_diferencia (float valor1, float valor2){

	float resultado;

	resultado = valor1 - valor2;

	if (resultado >= 0){

		resultado = valor1 - valor2;

	}

	else {

		resultado = valor2 - valor1;

	}

	return resultado;

}
