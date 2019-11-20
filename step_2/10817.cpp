/*
 * 단계 5 [10817] 세 수
 * 세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 
 * 작성자: hoony
 */

#include<iostream>
using namespace std;
int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A > B) {
		if (A > C) {
			if (B > C) cout << B << endl;
			else cout << C << endl;
		}
		else cout << A << endl;
	}
	else {
		if (A < C) {
			if (B > C) cout << C << endl;
			else cout << B << endl;
		}
		else cout << A << endl;
	}
	return 0;
}
