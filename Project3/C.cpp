#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");
	printf("hello world������ ���!\n");
	int var = 42;
	int unusing;
	return 0;
}