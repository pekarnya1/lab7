#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()	
{
	setlocale(LC_CTYPE, "RUS");
	printf("нажмите клавишу\n");
	printf("была нажата: %c", getch());
}