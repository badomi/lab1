#include <stdio.h>

double divide(int a , int b){
	if (b == 0){
		printf("0으로 나눌 수 없습니다.\n");
		return 0;
	}
	return (double)a / b;
}
