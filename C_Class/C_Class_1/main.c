#include <stdio.h>

int main() {

	// datatype 변수명;
	// 변수명은 영대소문자, _, 숫자
	// 숫자를 첫글자로 사용할 수 없습니다.
	// 변수명의 길이는 36자
	// 비쥬얼 스튜디오에서는 256자까지 사용가능합니다.

	short a;   // 변수를 정의한다.

	a = -20;   // 만들어진 변수 a에 값 20을 저장한다.

	// 형식지정문자열을 지원합니다.
	printf("a = %d\n", a);   // 부호있는 정수형 %d


	unsigned short aa;

	aa = 30;
	printf("aa = %u\n", aa); // 부호없는 정수형 %u


	float b = 1.2f;

	1.2; // double

	printf("b = %f\n", b);  // float 형출력 %f


	double c = 3.3;

	printf("c = %lf\n", c); // double 형 출력 %lf

	char d = 66;

	printf("d = %c\n", d); // 한문자 출력 %c


	printf("a = %d, aaa = %u, b = %f, c = %lf, d = %c\n", a, aa, b, c, d);



	return 0;
}