блок-схема для задания 1 <img width="427" height="339" alt="image" src="https://github.com/user-attachments/assets/5dc12565-1ba2-4189-8693-adc52546e3d1" />



# Домашнее задание к работе 7
## Условие задачи
16. Напишите программу, которая определяет какая цифровая клавиша была
нажата. Для ввода используйте getch(), объявленный в conio.h.

## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. printf("была нажата: %c", getch());
4. **Конец**

   
### Блок-схема
<img width="260" height="236" alt="image" src="https://github.com/user-attachments/assets/c2361bce-9856-44b1-ad36-923efdef5299" />


## 2. Реализация программы
```
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
```


## 3. Результаты работы программы
нажмите клавишу
была нажата: f

<img width="753" height="143" alt="image" src="https://github.com/user-attachments/assets/9a2615d1-73f8-42be-aa78-bf87e20bdea2" />


