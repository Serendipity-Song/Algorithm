
#include <iostream>
using namespace std;


int A, B, C;
int N[10] = {}; // ���ڿ� �ʱ�ȭ

int main() {
    //�Է¹޾� ���ϱ�
	cin >> A >> B >> C;
	int Result = A * B * C;

    //�ش� ������ ���ڿ��� �ϳ��� �����ֱ�
	while (Result != 0) {
        N[Result % 10] += 1;
        Result /= 10;
    }

    //���. 
    for (int i = 0; i < 10; i++) {
        cout << N [i] << endl;
    }

}
