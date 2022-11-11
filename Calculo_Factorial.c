
#include <stdio.h>

int calculo_factorial (int valor);

int main()
{
	unsigned int num = 0, factorial;
	printf("\nBienvenido a mi programa...\n");
	printf("Ingrese un numero entero mayor 0 y menor a 12 para calcular su factorial\n>>> ");
	scanf("%d", &num);
	while (!((num > 0) && (num < 12)))
	{
		printf("Valor ingreado NO VALIDO\nEl valor debe ser mayor a 0 y menor a 12\n>>> ");
		scanf("%d", &num);
	}
	factorial = calculo_factorial(num);
	printf("%d! = %d\n\n", num, factorial);
	return 0;
}

int calculo_factorial (int valor)
{
	int resultado = 1, i;
	for (i = 1; i <= valor; i++)
	{
		resultado = resultado * i;
	}
	return (resultado);
}
