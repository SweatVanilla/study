#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	
	long long N = 0;
	scanf("%lld", &N);
	long long ans = 0;
	for (long long i = 1; i <= N; i++) {
		ans += (N / i) * i;
	}
	printf("%lld\n", ans);
	return 0;
	
}

/*
����� ������ ���� �����Ϸ��� �� ���ڸ� ����� ������ �͵��� ��� ���ϸ�ȴ�....
*/