// Girilen 10 say�n�n toplam�n� ve �arp�m�n� ekrana yazd�ran program

#include <stdio.h>

main()
{
	int sayi, sayac = 1, toplam = 0, carpim = 1;

		while (sayac <= 10)
		{
		printf("Sayi Giriniz:");
		scanf("%d", &sayi);
		toplam += sayi;
		carpim *= sayi;		
		sayac++;				
		}
	printf("Toplam: %d \n", toplam);
	printf("Carpim: %d", carpim);
	
	




}
