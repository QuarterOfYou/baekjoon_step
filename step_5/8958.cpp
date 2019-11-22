/* 단계 7[8958] OX퀴즈
 * "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다.
 * O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
 * 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
 * 예를 들어, 10번 문제의 점수는 3이 된다.
 * "OOXXOXXOOO"의 점수는 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10점이다.
 * OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
	int T, sum = 0, correct = 0;
	char arr[80] = { 0 };
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> arr;
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				correct++;
				sum = sum + correct;
			}
			else correct = 0;
		}
		cout << sum << endl;
		correct = 0;
		sum = 0;
	}
	return 0;
}