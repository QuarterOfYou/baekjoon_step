/*
 * �ܰ� 8 [11022] A+B - 8
 * �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
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