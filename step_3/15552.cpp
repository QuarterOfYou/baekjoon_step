/*
 * �ܰ� 4 [15552] ���� A+B
 * ���������� for�� ������ Ǯ�� ���� �����ؾ� �� ���� �ִ�.
 * ����� ����� ������ ���� ���� �Է¹ްų� ����� �� �ð��ʰ��� �� �� �ִٴ� ���̴�.
 * C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�,
 * endl ��� ���๮��(\n)�� ����.
 * ��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.
 * https://www.acmicpc.net/board/view/22716

 * ù �ٿ� �׽�Ʈ���̽��� ���� T�� �־�����.
 * T�� �ִ� 1,000,000�̴�. ���� T�ٿ��� ���� �� ���� A�� B�� �־�����.
 * A�� B�� 1 �̻�, 1,000 �����̴�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T = 0;
	int A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return 0;
}