

//c++에서 시간 줄이기
#include <iostream>
using namespace std;



int main() {

	//1. cin과 cout관계를 풀어주는 방법
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

		

		for( ;T>0; T--) {

			int a, b;
			cin >> a >> b;

			//2. endl 대신 \n을 사용하는 방법.
			cout << a + b << '\n';
			
		}

		
}


























//int main() {
//    int n;
//    cin >> n;
//
//
//    int i;
//    int x = 0;
//
//    for (i = 0; n >= i; i++) {
//
//
//        x = x + i;
//
//
//    }
//    cout << x << endl;
//
//
//}
