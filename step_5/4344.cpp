/* 단계 8 [4344] 평균은 넘겠지
 * 대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 
 * 당신은 그들에게 슬픈 진실을 알려줘야 한다.
 * 작성자: hoony
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