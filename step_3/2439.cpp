/*
 * �ܰ� 10 [2439] �� ��� - 2
 * ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
 * ������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j < N) cout << " ";
			else cout << "*";
		}
		cout << '\n';
	}
	return 0;
}