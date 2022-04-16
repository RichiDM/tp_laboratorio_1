/*
 * UTN.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Maldonado Ricardo
 */
#include <stdio.h>
#include <stdlib.h>




float funcionIngresarKilometros()
{
    float kilometros;

    printf("ingresar kilometros\n");
    setbuf(stdout,NULL);
    scanf("%f",&kilometros);
    while(kilometros<1)
    {
    	printf("\nERROR EL NUMERO INGRESADO NO ES VALIDO, debe ser un numero positivo\n ");
    	setbuf(stdout,NULL);
    	scanf("%f",&kilometros);
    }
    return kilometros;

}
float funcionPreciosVueloLatam()
{

   float precioLatam;

   printf("ingresar el precio de empresa Latam :");
   setbuf(stdout,NULL);
   scanf("%f",&precioLatam);

   while(precioLatam<1)
      {
      	printf("\nERROR EL NUMERO INGRESADO NO ES VALIDO, debe ser un numero positivo\n ");
      	setbuf(stdout,NULL);
      	scanf("%f",&precioLatam);
      }


   return precioLatam;

}
float funcionPreciosVueloAerolineas()
{
	float precioAerolineas;

	printf("ingresar el precio de empresa aerolineas :");
	setbuf(stdout,NULL);
	scanf("%f",&precioAerolineas);

   while(precioAerolineas<1)
	 {
    	printf("\nERROR EL NUMERO INGRESADO NO ES VALIDO, debe ser un numero positivo\n ");
	   	setbuf(stdout,NULL);
	   	scanf("%f",&precioAerolineas);
     }



   return precioAerolineas;

}
float funcionDebitoConDescuento(float valor)
{

    float descuento;
    float totalDescontado;

    descuento=valor*0.10;
    totalDescontado=valor-descuento;


    return totalDescontado;

}
float funcionCreditoConAumento(float precio)
{
    float aumento;
    float totalConAumento;
    aumento=precio*0.25;
    totalConAumento=precio+aumento;
    return totalConAumento;
}
float funcionCambioPesosaBitcoin(float valor)
{
    float precioEnBitcoin;
    float btc;
    btc=4606954.55;
    precioEnBitcoin=valor/btc;

    return precioEnBitcoin;
}
float funcionCalcularPrecioUnitario(float valor,float km)
{
    float precioUnitarioFinal;

    precioUnitarioFinal=valor*km;

    return precioUnitarioFinal;
}
float funcionSacarLaDiferencia(float valor1,float valor2)
{
   float diferencia;

   if(valor1>valor2)
   {
       diferencia=valor1-valor2;
   }
   else
   {
       if(valor1<valor2)
       {
           diferencia=valor2-valor1;
       }
   }

   return diferencia;
}


