// Feet'i santimetreye çevirme

#include <stdio.h>

main(){
	
	int ft, cm;
	
	printf("Feet giriniz:");
	scanf("%d", &ft);
	
	cm = ft * (30.48);
	
	printf("Cm = %d", cm);
		
}
