

#include <iostream>
using namespace std;

//초기값 설정해준다.

int A[1000000];
int mmax = -1000000;
int mmin = 1000000;
int N;

int main() {
	//N개수 입력받는다.
	cin >> N;
	//for 조건 입력받는다.
	for (int i = 0; i < N; i++) {
		
		cin >> A[i]; //A를 입력받는다.
		if (A[i] < mmin ) mmin = A[i];
		if (A[i] > mmax) mmax = A[i];
		//입력값이 mmin보다 작으면 mmin으로 설정
		//입력값이 mmax보다 크면 mmax으로 설정
	}
	cout << mmin << " " << mmax;
}



