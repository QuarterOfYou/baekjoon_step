/*
 * �ܰ� 11 [10430] ������
 * (A+B)%C�� (A%C + B%C)%C �� ������?
 * (A��B)%C�� (A%C �� B%C)%C �� ������?
 * �� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
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