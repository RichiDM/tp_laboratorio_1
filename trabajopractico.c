/*
 ============================================================================
 Name        : trabajopractico.c
 Author      : Maldonado Ricardo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"



int main(void) {
    setbuf(stdout,NULL);
	float kilometros;
	float precioLatam;
	float precioAerolineas;
	float descuentoFinalLatam;
	float descuentoFinalAerolineas;
	float totalConAumentoLatam;
	float totalConAumentoAerolineas;
	float precioBtcAerolineas;
	float precioBtcLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaFinal;
	float kilometroForzado;
	float vueloAerolineasForzado;
	float vueloLatamForzado;
	int opcion;
	char seguir;
	seguir = 's';
	kilometroForzado=7090;
	vueloAerolineasForzado=162965;
	vueloLatamForzado=159339;



	do {
		printf("\n1 INGRESAR KILOMETROS\n");
		printf("2 INGRESAR PRECIOS DE VUELOS\n");
		printf("3 CALCULAR COSTOS\n");
		printf("4 INFORMAR RESULTADOS\n");
		printf("5 CARGA FORZADA DE DATOS\n");
		printf("6 SALIR DE LA APP\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch (opcion) {
		case 1:
			kilometros = funcionIngresarKilometros();
			break;
		case 2:
			precioAerolineas = funcionPreciosVueloAerolineas();

			precioLatam = funcionPreciosVueloLatam();
			break;
		case 3:
			descuentoFinalAerolineas = funcionDebitoConDescuento(
					precioAerolineas);
			descuentoFinalLatam = funcionDebitoConDescuento(precioLatam);
			totalConAumentoAerolineas = funcionCreditoConAumento(
					precioAerolineas);
			totalConAumentoLatam = funcionCreditoConAumento(precioLatam);
			precioBtcAerolineas = funcionCambioPesosaBitcoin(precioAerolineas);
			precioBtcLatam = funcionCambioPesosaBitcoin(precioLatam);
			precioUnitarioAerolineas = funcionCalcularPrecioUnitario(
					precioAerolineas, kilometros);
			precioUnitarioLatam = funcionCalcularPrecioUnitario(precioLatam,
					kilometros);
			diferenciaFinal = funcionSacarLaDiferencia(precioAerolineas,
					precioLatam);
			break;
		case 4:
			printf("\nPRECIO AEROLINEAS  $%.2f \n", precioAerolineas);
			printf("a) Precio con tarjeta de debito :$%.2f \n",
					descuentoFinalAerolineas);
			printf("b)Precio con tarjeta de credito :$%.2f \n",
					totalConAumentoAerolineas);
			printf("c)precio en bitcoin :%f BTC\n", precioBtcAerolineas);
			printf("d)el precio unitario final es :$%.2f\n",
					precioUnitarioAerolineas);

			printf("\nPRECIO LATAM  $%.2f \n", precioLatam);
			printf("a)Precio con tarjeta de debito :$%.2f \n",
					descuentoFinalLatam);
			printf("b)Precio con tarjeta de credito :$%.2f \n",
					totalConAumentoLatam);
			printf("c)precio en bitcoin :%f BTC\n", precioBtcLatam);
			printf("d)el precio unitario final es :$%.2f\n",
					precioUnitarioLatam);

			printf("\nla diferencia de precio es :$%.2f\n", diferenciaFinal);
			break;
		case 5:
            descuentoFinalAerolineas=funcionDebitoConDescuento(vueloAerolineasForzado);
			descuentoFinalLatam=funcionDebitoConDescuento(vueloLatamForzado);
			totalConAumentoAerolineas=funcionCreditoConAumento(vueloAerolineasForzado);
			totalConAumentoLatam=funcionCreditoConAumento(vueloLatamForzado);
			precioBtcAerolineas=funcionCambioPesosaBitcoin(vueloAerolineasForzado);
			precioBtcLatam=funcionCambioPesosaBitcoin(vueloLatamForzado);
			precioUnitarioAerolineas=funcionCalcularPrecioUnitario(vueloAerolineasForzado,kilometroForzado);
			precioUnitarioLatam=funcionCalcularPrecioUnitario(vueloLatamForzado,kilometroForzado);
			diferenciaFinal=funcionSacarLaDiferencia(vueloAerolineasForzado,vueloLatamForzado);

			printf("\nkilometros ingresados%.2f\n",kilometroForzado);

			printf("\nPRECIO AEROLINEAS  $%.2f \n",vueloAerolineasForzado);
			printf("a) Precio con tarjeta de debito :$%.2f \n",descuentoFinalAerolineas);
			printf("b)Precio con tarjeta de credito :$%.2f \n",totalConAumentoAerolineas);
			printf("c)precio en bitcoin :%f BTC\n",precioBtcAerolineas);
			printf("d)el precio unitario final es :$%.2f\n",precioUnitarioAerolineas);

			printf("\nPRECIO LATAM  $%.2f \n",vueloLatamForzado);
			printf("a)Precio con tarjeta de debito :$%.2f \n",descuentoFinalLatam);
			printf("b)Precio con tarjeta de credito :$%.2f \n",totalConAumentoLatam);
			printf("c)precio en bitcoin :%f BTC\n",precioBtcLatam);
			printf("d)el precio unitario final es :$%.2f\n",precioUnitarioLatam);

			printf("\nla diferencia de precio es :$%.2f\n",diferenciaFinal);

			printf("resultados de la carga forzada");
			break;
		case 6:
			printf("Gracias por usar nuestra app...Colabore");
			seguir = 'n';
			break;
		default:
			printf("Opcion incorrecta...\n");
			break;
		}

	} while (seguir == 's');

	return EXIT_SUCCESS;
}



