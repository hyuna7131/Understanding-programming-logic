#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money;
	int bread = 500, cookie = 700, cola = 400;
	int bread_c, cookie_c, cola_c;

	printf("Enter ±Ý¾×:");
	scanf("%d", &money);

	for (bread_c = 1; money - (bread_c * bread) > 0; bread_c++) {
		for (cookie_c = 1; money - (cookie_c * cookie) > 0; cookie_c++) {
			for (cola_c = 1; money - (cola_c * cola) > 0; cola_c++) {
				if((bread_c * bread) + (cookie_c * cookie) + (cola_c * cola) == money)
					printf("»§: %d ÄíÅ°: %d ÄÝ¶ó: %d\n", bread_c, cookie_c, cola_c);
			}
		}
	}
	

	return 0;
}