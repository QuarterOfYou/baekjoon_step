/*
 * �ܰ� 3 [2753] ����
 * ������ �־����� ��, �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� �� �̴�.
 * �������, 2012���� 4�� ����� ����������, 
 * 1900���� 4�� ���������, 100�� ����̱� ������ ������ �ƴϴ�.
 * ������, 2000���� 400�� ����̱� ������ �����̴�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;
int main(void)
{
	int year;
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
		cout << "1" << endl;
	else cout << "0" << endl;
	return 0;
}