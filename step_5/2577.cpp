/*
 * �ܰ� 4 [2577] ������ ����
 * �� ���� �ڿ��� A, B, C�� �־��� �� 
 * A��B��C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ���� ��� A = 150, B = 266, C = 427 �̶�� 
 * A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, 
 * ����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int A, B, C;
	int arr[10] = { 0 };
	cin >> A >> B >> C;
	int result = A * B * C;
	while (result > 0) {
		arr[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < sizeof(arr) / 4; i++) {
		cout << arr[i] << endl;
	}
	return 0;	
}