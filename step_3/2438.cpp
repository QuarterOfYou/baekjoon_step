/*
 * �ܰ� 9 [2438] �� ��� -1
 * ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i+1; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}