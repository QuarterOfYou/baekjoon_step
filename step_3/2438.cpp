/*
 * 단계 9 [2438] 별 찍기 -1
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i+1; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}