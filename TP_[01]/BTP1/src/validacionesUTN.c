/*
 * bibliotecaUTN.c
 *
 *  Created on: 12 abr 2022
 *      Author: 54112
 */


#include <stdio.h>
#include <stdlib.h>
#include "validacionesUTN.h"


/**
 * \brief Funcion para validar un entero
 * \param pNumeroIngresado es el entero a validar
 * \param mensaje : Muestra un mensaje al usuario
 * \param maximo y minimo : maximo valor y minimo valor a ingresar
 * \return retor -1 para error y 0 para validar
 */
int UTN_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos){

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

/**
 * \brief Funcion para validar un float
 * \param pNumeroIngresado es el flotante a validar
 * \param mensaje : Muestra un mensaje al usuario
 * \param maximo y minimo : maximo valor y minimo valor a ingresar
 * \return retor -1 para error y 0 para validar
 */
float UTN_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos){

	float auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

