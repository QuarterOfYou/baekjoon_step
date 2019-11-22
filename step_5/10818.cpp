/* 
 * 단계 1 [10818] 최소, 최대
 * N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
 * 작성자: hoony
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