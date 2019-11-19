/*
 * 단계 1 [1330] 두 수 비교하기
 * 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;
int main(void)
{
	int A, B;
	cin >> A >> B;
	if (A > B) cout << ">" << endl;
	else if (A < B) cout << "<" << endl;
	else cout << "==" << endl;
	return 0;
}