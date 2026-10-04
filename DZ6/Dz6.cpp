#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "RUS");
	int x, y;
	printf("ВВЕДИТЕ X И Y\n");
	scanf("%d %d", &x, &y);

	printf("ИТОГ\n");
	if (x > y) printf("%d > %d", x, y);
	else if (x < y) printf("%d < %d", x, y);
	else printf("%d = %d", x, y);
	return 0;
}