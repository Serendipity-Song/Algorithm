//c++에서 시간 줄이기
#include <iostream>
using namespace std;


int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

		for (; T > 0; T--){
	
			int a,b;
			cin >> a >> b;

			cout << a + b << "\n";
		}
}