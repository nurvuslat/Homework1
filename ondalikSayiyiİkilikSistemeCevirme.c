//Ondal�k verilen say�y� ikilik sisteme �eviren program

#include <stdio.h>

int main(){
    int sayi, temp, i=1, j, ikilik[100];

    printf("Sayi Giriniz:");
    scanf("%d", &sayi);

    temp = sayi;
    	while(temp != 0)
		{
        	ikilik[i]= temp % 2;
        	temp = temp / 2;
        	i++;
    	}

    		printf("%d sayisinin ikilik sayi sisteminde karsiligi : ", sayi);
    		for(j=i-1 ; j>0 ; j--)
			{		
        	printf("%d", ikilik[j]);
			}
}
