
/*
	Pido por pantalla un valor y calculo su factorial.
	Verificar que el número ingresado sea mayor a cero y menor a 12.
	En caso de que el resultado sea el mismo valor que el del argumento lo indico por pantalla.
	Devuelvo el resultado.
	!n = n * (n - 1) * (n - 2) * . . . 

	>>> TERMINADO <<<
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculo_factorial (int valor);

int main()
{
    srand(time(NULL));
    unsigned int num = 0, factorial;
	printf("Bienvenido a mi programa...\n");
	do
	{
	    num = rand()%20;    
	}
	while (!((num > 0) && (num < 12)));
	printf("Numero --> %d\n", num);
	factorial = calculo_factorial(num);
	printf("Factorial = %d\n", factorial);
	return 0;
}

int calculo_factorial (int valor)
{
	int resultado = 1, i;
    for (i = 1; i <= valor; i++)
	{
	    resultado = resultado * i;
	    //printf("%d\n", resultado);
	}
	return (resultado);
}
