/*
 * �ܰ� 5 [3052] ������
 * �� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�.
 * ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.
 * �� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�.
 * �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int arr[42] = { 0 };
	int input, sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		arr[input % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0) sum++;
	}
	cout << sum << endl;
	return 0;
}