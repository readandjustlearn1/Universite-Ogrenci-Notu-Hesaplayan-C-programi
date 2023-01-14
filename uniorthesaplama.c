#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int bolum;
	float not,final=0;
	int toplamyuzde = 0;
	printf("Notlandırmak için kaç ayrı bölüm var?(Vize,Final,Quiz,Ödev gibi): ");
	scanf("%d", &bolum);
	int agirlik;
	for (bolum; bolum > 0; bolum--) {

		printf("\n%d. bölümün ağırlığı yüzde kaç?(örnek 10): ", bolum);
		scanf("%d", &agirlik);
		toplamyuzde += agirlik;
		printf("\nAldığın not kaç?:örnek(97,5) ");
		scanf("%f", &not);

		final += not*(agirlik / 100.0);

	}
		
	if (toplamyuzde != 100)
		printf("\nToplam yüzde yüzü geçti sanırım yanlış sayılar girdin tekrar dene!");
	else
	{
		printf("%.2f", final);
	}
	

	  
	return 0;
}
