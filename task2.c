//#include <locale.h>
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	setlocale(LC_CTYPE, "RUS");
//	float x, y;
//	char c;
//	printf("Введите пример в формате '<число1><математическая операция><число2>'\n");
//	scanf("%f%c%f", &x, &c, &y);
//	switch (c) 
//	{
//	case '*':
//		printf("%1.2f*%1.2f = %1.2f", x, y, x * y);
//		break;
//	case '+':
//		printf("%1.2f+%1.2f = %1.2f", x, y, x + y);
//		break;
//	case '-':
//		printf("%1.2f-%1.2f = %1.2f", x, y, x - y);
//		break;
//	case '^':
//		printf("%1.2f^%1.2f = %1.2f", x, y, pow(x, y));
//		break;
//	case '/':
//		printf("%1.2f/ %1.2f = %1.2f", x, y, x / y);
//		break;
//	}
//}