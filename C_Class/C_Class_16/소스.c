#include <stdio.h>



struct Student {   // 구조체 (사용자 정의 데이타 타입)
	int No;   // 학번 (구조체 멤버)
	int Age;   //나이
	int Grade;   // 학년
	int ClassNum;   // 반번호
};

int main() {
	// 학생관리용 프로그램.
	// 학번, 이름, 나이, 성별, 학년

	int No;   // 학번
	int Age;   //나이
	int Grade;   // 학년
	int ClassNum;   // 반번호

	// 100명
	// 각각의 변수를 만드는 방법
	// int No0, No1, No2,

	// 배열을 쓰는 방법

	int NoArray[100];
	int AgeArray[100];
	int GradeArray[100];
	int ClassNumArray[100];


	NoArray[0] = 1234;   // 학번
	AgeArray[0] = 13;   // 나이
	GradeArray[0] = 3;   // 반번호
	ClassNumArray[0] = 11; // 반번호

	NoArray[1] = 1234;   // 학번
	AgeArray[1] = 13;   // 나이
	GradeArray[1] = 3;   // 반번호
	ClassNumArray[1] = 11; // 반번호

	// 다좋은 방법이 있습니다.
	// 서로 연관성있는 데이타를 하나로 묶어주는 기능있습니다.
	// 구조체라고 합니다.

	// 구조체 변수
	struct Student a;

	// 구조체 변수의 멤버 접근할때는 .(period)연산자를 사용합니다.
	a.No = 12312;
	a.Age = 10;
	a.Grade = 2;
	a.ClassNum = 11;

	printf("a.No = %d, a.Age = %d, a.Grade = %d, a.ClassNum = %d\n", a.No, a.Age, a.Grade, a.ClassNum);

	return 0;
}