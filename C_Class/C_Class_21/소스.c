#include <stdio.h>

// ��ɾ �ϳ��� �����ִ� ����� �ֽ��ϴ�.
// �Լ�

// returntype �Լ���(�Ű�����){
// ��ɾ� ����.
//}

// �Լ��ȿ� ��ɾ ó���ϰ� ������� ���� ��쿡�� void��� �����Ͻø� �˴ϴ�.


void PrintMonster() {
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
    printf("Monster is World!!\n");
}

// �Լ��� ����ϸ�
// 1. ���뼺
// 2. ��⼺
// 3. ������( �ҽ��ڵ� �м��ϱ� ��������.)
void PrintMonsterNum(int count) {
    for (int i = 0; i < count; i++) {
        printf("Monster is World!!\n");
    }
}

// main.�Լ��� Ư���� �뵵�� ���˴ϴ�.
// C���� ������� ���α׷��� main�Լ��������� ���α׷��� ���۵˴ϴ�.
// �׷��� main�Լ��� ������ �Լ���� �մϴ�.
int main() {

    PrintMonsterNum(10);
    ///.......


    PrintMonster();
    //.....

    PrintMonster();




    return 0;
}