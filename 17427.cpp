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
약수의 개수의 합을 생각하려면 그 숫자를 약수로 가지는 것들을 모두 더하면된다....
*/