

#include <stdio.h>

int main() {
    // De�i�ken tan�mlamalar�
    double yatirim_getirisi, risksiz_faiz, standart_sapma, sharpe_orani;

    printf("=== Sharpe Orani Hesaplama Programi ===\n\n");

    // Kullan�c�dan verilerin al�nmas�
    printf("Yatirim getirisi (%% cinsinden): ");
    scanf("%lf", &yatirim_getirisi);

    printf("Risksiz faiz orani (%% cinsinden): ");
    scanf("%lf", &risksiz_faiz);

    printf("Portfoyun standart sapmasi (%% cinsinden): ");
    scanf("%lf", &standart_sapma);

    // Hesaplama
    sharpe_orani = (yatirim_getirisi - risksiz_faiz) / standart_sapma;

    // Sonu�lar�n ekrana yazd�r�lmas�
    printf("\nSharpe Orani: %.2f\n", sharpe_orani);

    // Yorumsal de�erlendirme
    if (sharpe_orani < 1)
        printf("Bu oran dusuk kabul edilir. Risk karsiliginda getiriniz zayif olabilir.\n");
    else if (sharpe_orani >= 1 && sharpe_orani < 2)
        printf("Bu oran iyi kabul edilir. Dengeli bir risk-getiri orani var.\n");
    else if (sharpe_orani >= 2 && sharpe_orani < 3)
        printf("Bu oran cok iyi kabul edilir. Yatiriminiz riskine gore yuksek getiri sagliyor.\n");
    else
        printf("Bu oran mukemmel kabul edilir! Yatiriminiz riskine gore cok basarili.\n");

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

