// Fahrenheit'ý Celsius'a çeviren program

#include <stdio.h>

main(){
	
	int F, C;
	
	printf("F cinsinden dereceyi girin:");
	scanf("%d", &F);
	
	C = (F - 32) /1.8;
	
	printf("Celsius = %d", C);
	
}
