/*
 ============================================================================
 Name        : BTP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================*/
#include <stdio.h>
#include <stdlib.h>

#include "validacionesUTN.h"
#include "calculosUTN.h"

int main(void) {

	setbuf(stdout, NULL);
	float kilometros = 0;
	float precioAereolineas = 0;
	float precioLatam = 0;
	int opcionMenu;
	int validacionRetorno;
	int validacionFloat;
	float tarjetaDebitoAereolineas;
	float tarjetaDebitoLatam;
	float tarjetaCreditoAereolineas;
	float tarjetaCreditoLatam;
	float bitcoinAereolineas;
	float bitcoinLatam;
	float precioxKmAereolineas;
	float precioxKmLatam;
	float diferenciaPrecio;
	int calculos;
	float kilometrosBase;
	float precioAereolineasBase;
	float precioLatamBase;


	do {

	printf("1)Ingresar Kilometros \n");
	printf("2)Ingresar Precio Vuelos \n");
	printf("3)Calcular Costos \n");
	printf("4)Informar Resultados \n");
	printf("5)Carga Forzada de Datos \n");
	printf("6)Salir \n");

	validacionRetorno = UTN_getInt(&opcionMenu ,"Elija una opcion\n","opcion incorrecta",6,1,2);

if(validacionRetorno == 0){

      switch(opcionMenu){

      case 1:

    	  validacionFloat = UTN_getFloat(&kilometros,"Ingrese los Kilometros\n","Dato incorrecto",1000000,1,1);
         if (validacionFloat == 0){
        	 printf("%.2f \n", kilometros);
         }
         else {

             printf("Los kilometros fueron mal ingresados \n");

                  }

           break;

       case 2:
            if(kilometros > 0){

    	    printf("Ingrese Precio Vuelos Aereolineas \n");
    	    scanf ("%f", &precioAereolineas);



    	    printf("Ingrese Precio Vuelos Latam\n");
    	    scanf ("%f", &precioLatam);
    	    }
            else {

            	printf("Debe ingresar los kilometros\n");
            }



           break;

       case 3:

    	      calculos = -1;

    	   if (precioAereolineas > 0 && precioLatam > 0){

    		   tarjetaDebitoAereolineas = UTN_descuentoAumento(precioAereolineas, -10);
    		   tarjetaDebitoLatam = UTN_descuentoAumento(precioLatam, -10);
    		   tarjetaCreditoAereolineas = UTN_descuentoAumento(precioAereolineas, 25);
               tarjetaCreditoLatam = UTN_descuentoAumento(precioLatam, 25);
               bitcoinAereolineas = UTN_conversionBitcoin(precioAereolineas);
               bitcoinLatam = UTN_conversionBitcoin(precioLatam);
    		   precioxKmAereolineas = UTN_precioPorKm (kilometros, precioAereolineas);
               precioxKmLatam = UTN_precioPorKm (kilometros, precioLatam);
               diferenciaPrecio = UTN_diferencia (precioAereolineas, precioLatam);




    		   printf("Los calculos se han realizado satisfactoriamente\n");

    		   calculos = 0;

    	   }
    	   else {

    		   printf("No se puede calcular, ingrese los precios de vuelos\n");
    	   }

    	   break;

       case 4:

    	      if (calculos == 0){


    	    	 printf( "Kilometros ingresados: %.2f \n", kilometros);
    	         printf ("Precio AEREOLINEAS:  %.2f \n", precioAereolineas);
    	         printf ("a)Precio con tarjeta debito: %.2f \n", tarjetaDebitoAereolineas);
    	         printf ("b)Precio con tarjeta credito: %.2f \n", tarjetaCreditoAereolineas );
    	         printf ("c)Precio pagando con bitcoin : %.2f BTC \n", bitcoinAereolineas);
    	         printf ("d)Precio Unitario : %.2f \n", precioxKmAereolineas);


    	         printf ("Precio LATAM:  %.2f \n", precioLatam);
    	         printf ("a)Precio con tarjeta debito: %.2f \n", tarjetaDebitoLatam);
    	         printf ("b)Precio con tarjeta credito: %.2f \n", tarjetaCreditoLatam );
    	         printf ("c)Precio pagando con bitcoin : %.2f BTC \n", bitcoinLatam);
    	         printf ("d)Precio Unitario : %f \n", precioxKmLatam);

    	         printf ("La diferencia de precio es : %f \n", diferenciaPrecio);

    	                            }
    	      else {

    	    	  printf ("Por favor realice primero los calculos en la opcion 3 \n");
    	      }

    	      break;

       case 5:

    	              kilometrosBase = 7090;
    	              precioAereolineasBase = 162965;
    	              precioLatamBase = 159339;


    	                           tarjetaDebitoAereolineas = UTN_descuentoAumento(precioAereolineasBase, -10);
    	                  		   tarjetaDebitoLatam = UTN_descuentoAumento(precioLatamBase, -10);
    	                  		   tarjetaCreditoAereolineas = UTN_descuentoAumento(precioAereolineasBase, 25);
    	                  		   tarjetaCreditoLatam = UTN_descuentoAumento(precioLatamBase, 25);
    	                  		   bitcoinAereolineas = UTN_conversionBitcoin(precioAereolineasBase);
    	                  		   bitcoinLatam= UTN_conversionBitcoin(precioLatamBase);
    	                  		   precioxKmAereolineas = UTN_precioPorKm (kilometrosBase, precioAereolineasBase);
    	                           precioxKmLatam = UTN_precioPorKm (kilometrosBase, precioLatamBase);
    	                           diferenciaPrecio = UTN_diferencia (precioAereolineasBase, precioLatamBase);



    	      printf( "Kilometros ingresados: %.2f \n", kilometrosBase);
    	       printf ("Precio AEREOLINEAS:  %.2f \n", precioAereolineasBase);
    	      printf ("a)Precio con tarjeta debito: %.2f \n", tarjetaDebitoAereolineas);
    	      printf ("b)Precio con tarjeta credito: %.2f \n", tarjetaCreditoAereolineas );
    	      printf ("c)Precio pagando con bitcoin : %.2f BTC \n", bitcoinAereolineas);
    	      printf ("d)Precio Unitario : %.2f \n", precioxKmAereolineas);


    	      printf ("Precio LATAM:  %.2f \n", precioLatamBase);
    	      printf ("a)Precio con tarjeta debito: %.2f \n", tarjetaDebitoLatam);
    	      printf ("b)Precio con tarjeta credito: %.2f \n", tarjetaCreditoLatam );
    	      printf ("c)Precio pagando con bitcoin : %.2f BTC \n", bitcoinLatam);
    	      printf ("d)Precio Unitario : %f \n", precioxKmLatam);

    	      printf ("La diferencia de precio es : %f \n", diferenciaPrecio);


    	      break;

       case 6:

    	   printf ("Hasta la proxima!!");

    	   break;
	}

	}




	}while(opcionMenu != 6);

	return 0;
}
