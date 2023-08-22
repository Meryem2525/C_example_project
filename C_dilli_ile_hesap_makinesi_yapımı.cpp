#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2;
	int transaction;
	printf("enter number1 : ");
	scanf_s("%d", &number1);

	printf("enter number2 : ");
	scanf_s("%d", &number2);

	printf("\n 1.sum \n 2.extraction \n 3.division \n 4.multiplcation \n ");

	printf("enter transaction: ");
	scanf_s("%d", &transaction);

	if (transaction == 1)
	{
		printf("result of collection: %d \n ", number1 + number2);

	}
	else if (transaction == 2)
	{
		printf("result of extraction :%d \n ", number1 - number2);
	}
	else if (transaction == 3)
	{
		printf("result of division : %d\n", number1 / number2);
	}
	else if (transaction == 4)
	{
		printf("result of multiplaction: %d \n", number1 * number2);


	}



	return 0;
}