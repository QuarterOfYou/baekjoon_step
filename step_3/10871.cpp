/*
 * �ܰ� 11 [10871] X���� ���� ��
 * ���� N���� �̷���� ���� A�� ���� X�� �־�����.
 * �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N, X;
	cin >> N >> X;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) 
		cin >> arr[i];
	for (int i = 0; i < N; i++)
		if (arr[i] < X) cout << arr[i] << ' ';
	cout << endl;
	delete[]arr;
	return 0;
}