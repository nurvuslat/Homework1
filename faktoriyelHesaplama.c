// Faktöriyel hesaplama programý

#include <stdio.h>

main(){
	
	int i, sayi, faktoriyel;
	
	printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz:");
	scanf("%d", &sayi);
	
		for(i=1; i<=sayi; i++)
			{
			faktoriyel *= i;
			}
	printf("Sonuc: %d", faktoriyel);
	
}
