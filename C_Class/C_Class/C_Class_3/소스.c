#include <stdio.h>
#include <stdbool.h>   // �ش� ��������� include�ϸ� bool Ÿ���� �� ���ִ�.

int main() {
	int a = 20;
	int b = 30;

	bool ret2 = a < b;   // bool Ÿ�� ���.

	printf("ret = %d\n", ret2);

	// ��������
	// &&(��And), ||(��Or) , !(�� not)
	//

	// ��And �׸���
	// true && true = true;
	// true && false = false;
	// false && true = false;
	// false && false = false;

	// �� OR �Ǵ� Ȥ��
	// true || true = true;
	// true || false = true;
	// false || true = true;
	// false || false = false;

	// �� Not
	// !false = true;
	// !true = false;

	int TRUE = 1;
	int FALSE = 0;

	int ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);







	return 0;
}