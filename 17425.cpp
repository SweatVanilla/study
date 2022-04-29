#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


vector<long long> dp(1000001,1);
vector<long long> Gx(1000001);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int Tcase;
	for (int i = 2; i < 1000001; i++) {
		for (int j = 1; i*j < 1000001; j++) {
			dp[i*j] += i;
		}
	}
	for (int i = 1; i < 1000001; i++) {
		Gx[i] = Gx[i - 1] + dp[i];
	}
	cin >> Tcase;
	for (int k = 0; k < Tcase; k++) {
		int n;
		cin >> n;
		cout << Gx[n] << "\n";
	}
	return 0;

}

/*
�� ���ڸ����� ����� ���� ���� �� (ó������ ��� ����� ���ذ��鼭 ã�� �� ����..)

G(x) �迭�� ���� �� �����Ͽ� ���(dp����)
*/
