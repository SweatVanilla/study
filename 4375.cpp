#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	
	int N = 0;
	while (1) {
		scanf("%d", &N);
		if (N == 0) break;
		int tmp = 1; int cnt = 1;
		while (1) {
			if (tmp%N == 0)break;
			tmp = ((tmp * 10) + 1) % N;
			cnt++;
		}
		printf("%d\n", cnt);
		N = 0;
	}
	return 0;
	
}

/*
������ ������ �̿��Ͽ� Ǫ�� ����

(A+B)%C == (A%C + B%C)%C

�ٽ� ��������
*/