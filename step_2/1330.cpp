/*
 * �ܰ� 1 [1330] �� �� ���ϱ�
 * �� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
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