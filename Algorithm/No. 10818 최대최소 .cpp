

#include <iostream>
using namespace std;

//�ʱⰪ �������ش�.

int A[1000000];
int mmax = -1000000;
int mmin = 1000000;
int N;

int main() {
	//N���� �Է¹޴´�.
	cin >> N;
	//for ���� �Է¹޴´�.
	for (int i = 0; i < N; i++) {
		
		cin >> A[i]; //A�� �Է¹޴´�.
		if (A[i] < mmin ) mmin = A[i];
		if (A[i] > mmax) mmax = A[i];
		//�Է°��� mmin���� ������ mmin���� ����
		//�Է°��� mmax���� ũ�� mmax���� ����
	}
	cout << mmin << " " << mmax;
}



