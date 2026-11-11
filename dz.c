#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "obyavlenia.h"


int main()
{
	setlocale(LC_ALL, "RUS");
	int cycle=1;
	while (cycle != 0) {
		double x, y;
		char background, function_form;
		printf("Введите x,y\n");
		scanf("%lf %lf",&x,&y);
		printf("Введите символы для фона графика И символ для закраски графика: \n");
		scanf(" %c",&background);
		scanf(" %c",&function_form);
		draw_grafik(x, y, background, function_form);
		printf("Продолжить ? (Да - введите любое число, Нет - введите 0)\n");
		scanf("%d", &cycle);
	}
}

