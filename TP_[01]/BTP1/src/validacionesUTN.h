/*
 * bibliotecaUTN.h
 *
 *  Created on: 12 abr 2022
 *      Author: 54112
 */

#ifndef VALIDACIONESUTN_H_
#define VALIDACIONESUTN_H_

int UTN_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos);

float UTN_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos);




#endif /* VALIDACIONESUTN_H_ */
