
//마지막에 00 입력받으면 마무리 됨.


//



#include <iostream>
using namespace std;



int main() {

	while (true) {

		int a, b;
		cin >> a >> b;

		if (a != 0 && b != 0) {

			cout << a + b << endl;
		}

		else {
			break;
		}

	}
	return 0;

}

