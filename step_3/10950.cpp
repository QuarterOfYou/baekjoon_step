/*
 * 단계 2 [10950] A+B-3
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int A, B;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << endl;
	}
	return 0;
}