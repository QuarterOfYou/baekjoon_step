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
		for (int j = N - 1; j >= 0; j--) {
			if (j > i) cout << " ";
			else cout << "*";
		}
		cout << '\n';
	}
	return 0;
}