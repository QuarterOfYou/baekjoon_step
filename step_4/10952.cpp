/* 
 * �ܰ� 1 [10952] A+B - 5
 * �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
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