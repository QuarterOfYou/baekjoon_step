/*
 *  �ܰ� 5 [10817] �� ��
 * �� ���� A, B, C�� �־�����. �̶�, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
 * �ۼ���: hoony
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