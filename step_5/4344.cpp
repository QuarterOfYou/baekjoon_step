/* �ܰ� 8 [4344] ����� �Ѱ���
 * ���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. 
 * ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;

int main(void) {
	int C, N;
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> N;
		float* arr = new float[N];
		float sum = 0, avr = 0, over = 0;
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		avr = sum / N;
		for (int j = 0; j < N; j++) {
			if (arr[j] > avr) over++;
		}
		over = over / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << over << "%" << endl;
		delete[]arr;
	}
	return 0;
}