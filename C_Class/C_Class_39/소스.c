#include <stdio.h>

union test {
	int value;
	char text[4];
};

union test2 {
	int value;
	char value2;
	short value3;
};

int main() {
	union test a;
	a.value = 0x12345678;

	printf("%x %x %x %x\n", a.text[0], a.text[1], a.text[2], a.text[3]);

	union test2 b;



	return 0;
}