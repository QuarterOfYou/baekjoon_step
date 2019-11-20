/*
 * 단계 8 [11022] A+B - 8
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int T;
	int A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << '\n';
	}
	return 0;
}