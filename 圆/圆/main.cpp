#include "Cricle.h"
#include <cstdio>
#include <Windows.h>
#define COUNT 200000

int main()
{
	char* matrix;
	int i;

	system("color 0a");

	matrix = "10 01 01 010";
	for (i = 0; i < COUNT; i++)
	{
		printf("%c\t", *matrix + i);
		Sleep(1);

	}
	return 0;

}