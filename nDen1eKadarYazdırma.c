//T�m do�al say�lar� tersten yazd�ran program (n --> 1)

#include <stdio.h>

main()
{
	int sayi = 0 ;
	
	printf("Bir Sayi Giriniz:");
	scanf("%d", &sayi);
	
		while(sayi > 1)
		{
			sayi = sayi - 1;
			printf("%d\n", sayi);			
		}

}
