/*
 * �ܰ� 2 [9498] ���� ����
 * ���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 
 * 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;
int main(void)
{
	int score;
	cin >> score;
	if (score >= 90 && score <= 100) cout << "A" << endl;
	else if (score >= 80 && score < 90) cout << "B" << endl;
	else if (score >= 70 && score < 80) cout << "C" << endl;
	else if (score >= 60 && score < 70) cout << "D" << endl;
	else cout << "F" << endl;
	return 0;
}