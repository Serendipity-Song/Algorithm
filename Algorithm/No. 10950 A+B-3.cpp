
#include<iostream>
using namespace std;


int main() {
	//총 시행횟수 T값 먼저 받기
	int T;
	cin >> T;

		//인자 a,b 받아서 계산하기
		for (; 0 < T; T--) {
			int a, b;
			cin >> a >> b;
			cout << a + b << endl;
		}
}

