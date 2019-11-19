/*
 * 단계 2 [9498] 시험 성적
 * 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 
 * 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
 * 작성자: hoony
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