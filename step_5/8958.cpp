/* �ܰ� 7[8958] OX����
 * "OOXXOXXOOO"�� ���� OX������ ����� �ִ�.
 * O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�.
 * ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.
 * ���� ���, 10�� ������ ������ 3�� �ȴ�.
 * "OOXXOXXOOO"�� ������ 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10���̴�.
 * OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
	int T, sum = 0, correct = 0;
	char arr[80] = { 0 };
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> arr;
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				correct++;
				sum = sum + correct;
			}
			else correct = 0;
		}
		cout << sum << endl;
		correct = 0;
		sum = 0;
	}
	return 0;
}