/*
 * �ܰ� 4 [2884] �˶� �ð�
 * ����̴� ���� ��ħ �˶��� ��� �Ͼ��.
 * �˶��� ��� �ٷ� �Ͼ�� �����̰�����, �׻� ���ݸ� �� �ڷ��� ���� ������ ���� �б��� �����ϰ� �ִ�.
 * ����̴� ��� ����� �����غ�������, ���ݸ� �� �ڷ��� ������ �� � �͵� ���� ���� ������.
 * �̷� ����̸� �ҽ��ϰ� ����, â���̴� �ڽ��� ����ϴ� ����� ��õ�� �־���.
 * �ٷ� "45�� ���� �˶� ���߱�"�̴�.
 * �� ����� �ܼ��ϴ�. ���� �������ִ� �˶��� 45�� �ռ��� �ð����� �ٲٴ� ���̴�. 
 * ������ �˶� �Ҹ��� ������, �˶��� ���� ���� �� �� ���̱� �����̴�.
 * �� ����� ����ϸ�, ���� ��ħ �� ��ٴ� ����� ���� �� �ְ�, �б��� �������� �ʰ� �ȴ�.
 * ���� ����̰� ����� �˶� �ð��� �־����� ��, 
 * â������ ����� ����Ѵٸ�, �̸� ������ ���ľ� �ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: hoony
 */

#include<iostream>
using namespace std;
int main(void)
{
	int H, M;
	cin >> H >> M;
	if (M < 45) {
		M += 60;
		H--;
		if (H < 0) H = 23;
	}
	cout << H << ' ' << M - 45 << endl;
	return 0;
}