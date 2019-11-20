/*
 * 단계 11 [10871] X보다 작은 수
 * 정수 N개로 이루어진 수열 A와 정수 X가 주어진다.
 * 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
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