#include <stdio.h>
#include <stdlib.h>

int main() {
	float odenecekFatura, eskiBirimFiyat, yeniBirimFiyat;
	float enflasyon, eskiAboneUcreti, yeniAboneUcreti;
	int yeniOkuma, eskiOkuma, toplamHarcananElektrik;
	printf("Enflasyon oranini giriniz: ");
	scanf_s("%f", &enflasyon);

	printf("onceki aya ait birim fiyatını giriniz: ");
	scanf_s("%f", &eskiBirimFiyat);

	printf("onceki aya ait abone ucretini giriniz: ");
	scanf_s("%f", &eskiAboneUcreti);

	printf("Bir onceki aya ait okuma degerini giriniz: ");
	scanf_s("%d", &eskiOkuma);

	printf("Bu aya ait okuma degerini girin: ");
	scanf_s("%d", &yeniOkuma);

	toplamHarcananElektrik = yeniOkuma - eskiOkuma;
	yeniBirimFiyat = eskiBirimFiyat * (1 + enflasyon / 100);
	yeniAboneUcreti = eskiAboneUcreti * (1 + enflasyon / 100);

	odenecekFatura = toplamHarcananElektrik * yeniBirimFiyat + yeniAboneUcreti;

	printf("\n odeyeceginiz fatura tutari:%f\n\n", odenecekFatura);



	


	return 0;
}
