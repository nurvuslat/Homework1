//Girilen sayýnýn çift mi tek mi olduðunu bulan program

#include <stdio.h>	

main(){
	
	int sayi;
	
	printf("Sayiyi Giriniz:");
	scanf("%d", &sayi);
	
	if (sayi%2==0){
		printf("Sayi Cifttir");
	}
	else{
		printf("Sayi Tektir");
	}
	
	
}
