
#include <iostream>
using namespace std;

//�Լ��� ��������

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

//���α׷��� ������ - �Լ� �����ؼ� ����ϱ�. + �����Ҵ�
int main() {
	int n;
	cin >> n;
	cout << Han(n) << endl;
	return 0;

}


