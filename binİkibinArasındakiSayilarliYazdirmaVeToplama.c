//1000-2000 arasýndaki çift sayýlarý ve toplamlarýný ekrana yazdýran program

#include <stdio.h>

main()
{
	int sayi = 1000, toplam = 0;
	
		while (sayi<2000)
		{
			sayi+=2;
			printf("%d\n", sayi);
			toplam = sayi*(sayi+1);
		}
			printf("Toplam: %d\n", toplam);	
			
}
