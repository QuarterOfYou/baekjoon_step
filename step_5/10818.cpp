/* 
 * �ܰ� 1 [10818] �ּ�, �ִ�
 * N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) cin >> arr[i];
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	cout << min << ' ' << max << endl;
	delete[]arr;
	return 0;
}