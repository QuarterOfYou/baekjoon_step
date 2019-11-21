/* 
 * 단계 1 [10952] A+B - 5
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int A, B;
	while (1) {
		cin >> A >> B;
		if (A == 0 && B == 0) break;
		cout << A + B << '\n';
	}
	return 0;
}