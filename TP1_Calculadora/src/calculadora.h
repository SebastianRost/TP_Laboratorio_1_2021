#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED


/** \brief suma los dos numeros ingresados
 *
 * \param num1 int primer numero a ingresar
 * \param num2 int segundo numero a ingresar
 * \return int resultadoSuma
 *
 */
int calcularSuma(int num1,int num2);
/** \brief resta los dos numeros ingresados
 *
 * \param num1 int primer numero a ingresar
 * \param num2 int segundo numero a ingresar
 * \param total int el resultado de la resta
 * \return int resultadoResta
 *
 */
int calcularResta(int num1,int num2);
/** \brief multiplica los dos numeros ingresados
 *
 * \param num1 int primer numero a ingresar
 * \param num2 int segundo numero a ingresar
 * \param total int el resultado de la multiplicacion
 * \return int resultadoMultip
 *
 */
int calcularMultiplica(int num1,int num2);
/** \brief divide los dos numeros ingresados
 *
 * \param num1 int primer numero a ingresar
 * \param num2 int segundo numero a ingresar
 * \param total int el resultado de la division
 * \return int division
 *
 */

int calcularDiv(int num1,int num2);

/** \brief
 *
 * \param num int operando a factorizar
 * \return int factorial
 *
 */
int calcularFactorial(int num);


/** \brief
 *
 * \param num1 int primer operando ingresado
 * \param num2 int segundo operando ingresado
 * \param resultadoSuma int resultado de la suma
 * \param resultadoResta int resultado de la resta
 * \param resultadoMultip int resultado de la multiplicacion
 * \param resultadoDiv float resultado de la division
 * \param factorialA int resultado del primer factorial
 * \param factorialB int resultado del segundo factorial
 * \return void solo imprime
 *
 */
void mostrar(int num1, int num2,int resultadoSuma,int resultadoResta,int resultadoMultip, float resultadoDiv, int factorialA,int factorialB);




#endif // CALCULADORA_H_INCLUDED
