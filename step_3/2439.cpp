/*
 * 단계 10 [2439] 별 찍기 - 2
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j < N) cout << " ";
			else cout << "*";
		}
		cout << '\n';
	}
	return 0;
}