// Üç sayýdan en büyüðünü bulan program

#include <stdio.h>

main(){
	
	int a,b,c;
	
	printf("1. Sayiyi Giriniz:");
	scanf("%d", &a);
	printf("2. Sayiyi Giriniz:");
	scanf("%d", &b);
	printf("3. Sayiyi Giriniz:");
	scanf("%d", &c);
	
	if (a>b && a>c){
		printf("Birinci Sayi En Buyuk");
	}
	else if(b>a && b>c){
		printf("Ikinci Sayi En Buyuk");
	}	
	else{
		printf("Ucuncu Sayi En Buyuk");
	}

	
	
}
