#include <stdio.h>
#include <stdlib.h>

int main() {
	float pressure, constantR;   // pressure =basınç  //consatntR =R sabiti
	int numberOfMoles, volume, heat; //heat= sıcaklık //volume= hacim
	constantR = 0.82;
	 
	printf("kabın hacmini giriniz: ");
	scanf_s("%d", &volume);

	printf("kabdaki mol sayisini giriniz: ");
	scanf_s("%d", &numberOfMoles);

	printf("ortam sıcaklgini giriniz: ");
	scanf_s("%d", &heat);

	pressure = (numberOfMoles * constantR * heat) / volume;
	printf("%d hacimli kaptaki gazin basinci :%f\n\n\n", volume, pressure);
	return 0;
}
