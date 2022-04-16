/*
 * UTN.h
 *
 *  Created on: 15 abr. 2022
 *  Author: Maldonado Ricardo
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * @fn float funcionIngresarKilometros()
 * @return float
 */
float funcionIngresarKilometros();
/**
 * @fn float funcionPreciosVueloLatam()
 * @return float
 */
float funcionPreciosVueloLatam();
/**
 * @fn float funcionPreciosVueloAerolineas()
 * @return float
 */
float funcionPreciosVueloAerolineas();
/**
 * @fn float funcionDebitoConDescuento(float)
 * @param valor
 * @return float
 */
float funcionDebitoConDescuento(float valor);
/**
 * @fn float funcionCreditoConAumento(float)
 * @param precio
 * @return float
 */
float funcionCreditoConAumento(float precio);
/**
 * @fn float funcionCambioPesosaBitcoin(float)
 * @param valor
 * @return float
 */
float funcionCambioPesosaBitcoin(float valor);
/**
 * @fn float funcionCalcularPrecioUnitario(float, float)
 * @param valor
 * @param km
 * @return float
 */
float funcionCalcularPrecioUnitario(float valor, float km);
/**
 * @fn float funcionSacarLaDiferencia(float, float)
 * @param valor1
 * @param valor2
 * @return float
 */
float funcionSacarLaDiferencia(float valor1, float valor2);



#endif /* UTN_H_ */
