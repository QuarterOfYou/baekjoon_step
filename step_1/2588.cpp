/*
 * 단계 12 [2588] 곱셈
 * (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
 * (2588.png 이미지 참고)
 * (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;
	cout << A * (B % 10) << endl;
	cout << A * ((B / 10) % 10) << endl;
	cout << A * (((B / 10) / 10) % 10) << endl;
	cout << A * B << endl;
	return 0;
}