// Küçükten büyüðe (Küçük=3, Büyük=9) sayýlarý toplayýp ekrana yazdýran program

#include <stdio.h>

int main()
{
	int a, b, toplam = 0;
	
	printf("Birinci Sayiyi Giriniz:", &a);
	scanf("%d", &a);
	printf("Birinci Sayiyi Giriniz:", &b);
	scanf("%d", &b);
	
		if (a>b)
		{
			while(a>b)
			{
			toplam = toplam + b;
			b++;
			}
		if (b>a)
			while(b>a)
			{
			toplam = toplam + a;	
			a++;	
			}
		
	printf("Toplam: %d", toplam);
	
	return 0;

}	
	
	
	
	
	
	
}
