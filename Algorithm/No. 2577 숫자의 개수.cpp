
#include <iostream>
using namespace std;


int A, B, C;
int N[10] = {}; // 문자열 초기화

int main() {
    //입력받아 곱하기
	cin >> A >> B >> C;
	int Result = A * B * C;

    //해당 숫자의 문자열에 하나씩 더해주기
	while (Result != 0) {
        N[Result % 10] += 1;
        Result /= 10;
    }

    //출력. 
    for (int i = 0; i < 10; i++) {
        cout << N [i] << endl;
    }

}
