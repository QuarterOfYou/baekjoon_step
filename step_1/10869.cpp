/*
 * 단계 10 [10869] 사칙연산
 * 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;
	return 0;
}