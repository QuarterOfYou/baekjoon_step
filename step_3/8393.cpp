/*
 * �ܰ� 3 [8393] ��
 * n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum += i;
	cout << sum << endl;
	return 0;
}