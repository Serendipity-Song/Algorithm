
#include <iostream>
using namespace std;


int main() {

	int N;
	int X;
	cin >> N >> X;	// N�� X �Է�

	int arr[N];	// Nĭ�� �迭 ����

	for (int i = 0; i < N; i++) {
		cin >> arr[i];		// �迭�� N���� ���� ����
	}

	for (int i = 0; i < N; i++) {
		// i��° ���Ұ� X���� �۴ٸ� ���
		if (arr[i] < X) {
			cout << arr[i] << " ";
		}
	}
}