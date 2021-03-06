#ifndef UTNBIBLIOTECA_INPUT_H_
#define UTNBIBLIOTECA_INPUT_H_

/// \fn int PedirEntero(char[], char[], int, int*)
/// \brief Pide un numero de entero, validando que se haya ingresado un numero
/// \param Mensaje el mensaje que se mostrar para pedir el numero entero
/// \param MensajeError el mensaje de error en caso de que no se ingrese un numero
/// \param Reintentos la cantidad de reintentos para volver a ingresar un numero
/// \param refValidacion la direccion en memoria de la variable "validacion"
/// \return El numero entero ingresado
int PedirEntero(char mensaje[], char mensajeError[],int reintentos, int* numeroEntero);

/// \fn float PedirNumero(char[], char[], int)
/// \brief Pide un numero cualquiera, validando que ingresen unicamente numeros
/// \param Mensaje el mensaje que se mostrara al pedir un numero
/// \param MensajeError el mensaje de error que se mostrara en caso de no ingresar un numero
/// \param Reintentos la cantidad de reintentos para volver a ingresar un numero
/// \return El numero (con decimales) ingresado
int PedirNumero(char mensaje[], char mensajeError[], int reintentos, float* numeroFloat);

/// \fn int PedirNumConRango(char[], int, int)
/// \brief Pide un numero en un rango determinado por el usuario
/// \param mensaje El mensaje que se mostrara al pedir el numero
/// \param desdeElNumero El numero minimo del rango
/// \param hastaElNumero El numero maximo del rango
/// \return El numero ingresado
int PedirNumConRango(char mensaje[], int min, int max, float* numeroFloat);

/// \fn float RestarNumeros(float, float)
/// \brief Resta dos numeros de tipo flotante
/// \param numero1 El primer numero que se que se restara
/// \param numero2 El segundo numero que se que se restara
/// \return El resultado
float RestarNumeros(float numero1, float numero2);

/// \fn int DivisionNumeros(float, float, float*)
/// \brief Realiza la division entre dos numeros flotantes siempre que el divisor no sea 0
/// \param divisor El numero que va a dividir
/// \param dividendo El numero que debe ser dividido
/// \param refResultado El resultado de la division
/// \return Informa si se pudo realizar la division o no.
int DivisionNumeros(float divisor, float dividendo, float* refResultado);

/// \fn float MultiplicarNumeros(float, float)
/// \brief Multiplica dos numeros de tipo flotante
/// \param numero1 El primer numero a multiplicar
/// \param numero2 El segundo numero que se va a multiplicar con el primero
/// \return El resultado de la multiplicacion
float MultiplicarNumeros(float numero1, float numero2);

// \fn float RestarPorcentaje(float, float)
/// \brief Devuelve el resultado final del porcentaje de un numero
/// \param numero El numero del que se quiere realizar la cuenta
/// \param porcentaje El porcentaje que se desea sacar
/// \param sumarPorcentaje Actua como flag, siendo 1 igual a realizar la suma o 0 realizar resta.
/// \return El numero con el porcentaje descontado
float CalcularPorcentaje(float numero, float porcentaje, int sumarPorcentaje);

// \fn float CalcularBTC(float, float)
/// \brief calcula en pesos el cualquier numero ingresado a Btc
/// \param numero El numero del que se quiere realizar la cuenta
/// \param precioBTC El precio actual del BTC
/// \return El resultado de la cuenta
float CalcularBTC(float numero, float precioBTC);


#endif
