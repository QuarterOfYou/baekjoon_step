/*
 * �ܰ� 3[1065] �Ѽ�
 * � ���� ���� X�� �ڸ����� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
 * ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
 * N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int Hansu(int n)
{
	int cnt = 0;
	int hundred, ten, one;
	if (n < 100) return n;
	else {
		for (int i = 100; i <= n; i++) {
			hundred = i / 100;
			ten = (i % 100) / 10;
			one = (i % 100) % 10;
			if ((hundred - ten) == (ten - one)) cnt++;
		}
		return (99 + cnt);
	}
}

int main(void) {
	int N;
	cin >> N;
	cout << Hansu(N) << endl;
	return 0;
}
