/*
 * 단계 2 [2562] 최댓값
 * 9개의 서로 다른 자연수가 주어질 때,
 * 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
 * 예를 들어, 서로 다른 9개의 자연수
 * 3, 29, 38, 12, 57, 74, 40, 85, 61이 주어지면, 
 * 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N = 9, max = 0, cnt = 0;
	int arr[9] = {};
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
			cnt = i + 1;
		}
	}
	cout << max << '\n' << cnt << endl;
	return 0;
}