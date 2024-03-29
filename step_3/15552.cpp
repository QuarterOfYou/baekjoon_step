/*
 * 단계 4 [15552] 빠른 A+B
 * 본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다.
 * 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
 * C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고,
 * endl 대신 개행문자(\n)를 쓰자.
 * 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
 * https://www.acmicpc.net/board/view/22716

 * 첫 줄에 테스트케이스의 개수 T가 주어진다.
 * T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다.
 * A와 B는 1 이상, 1,000 이하이다.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T = 0;
	int A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return 0;
}