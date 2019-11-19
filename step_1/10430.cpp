/*
 * 단계 11 [10430] 나머지
 * (A+B)%C는 (A%C + B%C)%C 와 같을까?
 * (A×B)%C는 (A%C × B%C)%C 와 같을까?
 * 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include <iostream>
using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << (A % C + B % C) % C << endl;
	cout << (A * B) % C << endl;
	cout << (A % C * B % C) % C << endl;
	return 0;
}