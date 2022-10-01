#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char mask = 1;

	// 00000001

	mask = mask << 1;
	// 00000010
	printf("mask = %d\n", mask);

	mask = mask << 1;
	// 00000100
	printf("mask = %d\n", mask);

	mask = mask << 2;
	printf("mask = %d\n", mask);
	// 00010000

	mask = mask >> 1;
	// 00001000
	printf("mask = %d\n", mask);

	mask = mask >> 2;
	printf("mask = %d\n", mask);


	unsigned char light = 0;
	unsigned char mask = 1;

	int roomnumber = 0;

	printf("방번호를 입력하세요: ");
	scanf("%d", &roomnumber);

	mask = mask << roomnumber;
	//00001000

	light = light | mask;

	printf("light = %d\n", light);


	return 0;
}