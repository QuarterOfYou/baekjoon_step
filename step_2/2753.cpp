/*
 * 단계 3 [2753] 윤년
 * 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
 * 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때 이다.
 * 예를들어, 2012년은 4의 배수라서 윤년이지만, 
 * 1900년은 4의 배수이지만, 100의 배수이기 때문에 윤년이 아니다.
 * 하지만, 2000년은 400의 배수이기 때문에 윤년이다.
 * 작성자: hoony
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