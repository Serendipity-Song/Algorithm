
#include <iostream>
using namespace std;

//함수를 실행하자

int Han(int n) {
	int i, hundred, ten, one;
	int cnt = 0;
	if (n < 100)
		return n;

	else {
		for (i = 100; i <= n; i++) {
			hundred = i / 100;
			ten = i % 100 / 10;
			one = i % 10;

			if ((hundred - ten) == (ten - one))
				cnt++;
		}

		return (99 + cnt);
	}

}

//프로그램을 돌리자
int main() {

	int n;
	cin >> n;
	Han(n);
	cout << Han(n) << endl;
	return 0;

}


//함수를 정의하자
