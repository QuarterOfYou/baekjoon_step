/*
 * 단계 9 [1008] A/B
 * 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include <iostream>
using namespace std;

int main(void)
{
	double A, B;
	cin >> A >> B;
	cout.precision(15);
	cout << A / B << endl;
	return 0;
}