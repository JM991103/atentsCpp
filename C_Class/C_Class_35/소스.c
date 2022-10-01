#include <stdio.h>

    int add(int a, int b) {
    	return a + b;
    }
    
    int sub(int a, int b) {
    	return a - b;
    }
    
    int mul(int a, int b) {
    	return a * b;
    }
    
    int calculator(int(*pfunc)(int, int), int a, int b) {
    	return pfunc(a, b);
    }
    
    int main() {
    	int a = 20;
    	int b = 30;
    
    	int (*pfunc)(int, int);   // 함수 포인터 변수
    
    	pfunc = add;
    
    	int ret = pfunc(a, b);
    
    	printf("%d + %d = %d\n", a, b, ret);
    
    	pfunc = sub;
    
    	ret = pfunc(a, b);
    	printf("%d - %d = %d\n", a, b, ret);
    
    
    	ret = calculator(mul, a, b);
    
    	printf("%d x %d = %d\n", a, b, ret);
    
        int (*pfuncArray[3])(int, int);     // 함수 포인터 배열

        pfuncArray[0] = add;
        pfuncArray[1] = sub;
        pfuncArray[2] = mul;
    
        for (int i = 0; i < 3; i++) {
            printf("result = %d\n", pfuncArray[i](a, b));
        }


    	return 0;
    }