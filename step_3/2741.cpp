/*
 * 단계 5 [2741] N 찍기
 * 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cout << i + 1 << '\n';
	return 0;
}