/*
 * �ܰ� 2 [2562] �ִ�
 * 9���� ���� �ٸ� �ڿ����� �־��� ��,
 * �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ���� ���, ���� �ٸ� 9���� �ڿ���
 * 3, 29, 38, 12, 57, 74, 40, 85, 61�� �־�����, 
 * �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N = 9, max = 0, cnt = 0;
	int arr[9] = {};
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
			cnt = i + 1;
		}
	}
	cout << max << '\n' << cnt << endl;
	return 0;
}