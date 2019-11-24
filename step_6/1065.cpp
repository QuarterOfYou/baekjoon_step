/*
 * 단계 3[1065] 한수
 * 어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다.
 * 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
 * N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int Hansu(int n)
{
	int cnt = 0;
	int hundred, ten, one;
	if (n < 100) return n;
	else {
		for (int i = 100; i <= n; i++) {
			hundred = i / 100;
			ten = (i % 100) / 10;
			one = (i % 100) % 10;
			if ((hundred - ten) == (ten - one)) cnt++;
		}
		return (99 + cnt);
	}
}

int main(void) {
	int N;
	cin >> N;
	cout << Hansu(N) << endl;
	return 0;
}
