//Herhangi bir say�n�n �arp�m tablosunu olu�turan program

#include <stdio.h>

main()
{
	int sayi, i, carpim;
	
	printf("Bir Sayi Girniz:");
	scanf("%d", &sayi);
	
		for(i=1; i<=10; i++)
		{
			carpim = sayi * i;	
			printf("%d\n", carpim);
		}
		
}
