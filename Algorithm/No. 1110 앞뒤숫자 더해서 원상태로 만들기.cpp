

#include<iostream> 
using namespace std; 


int main() {
	int num; //�Է��� ���� 
	int firstnum; //ù° �ڸ� 
	int secondnum;//��° �ڸ� 
	int sumnum; // ù���ڸ� + �Ѥ��ڸ� 
	int result = 0; // ����Ŭ�� ���� ��� 
	int cnt = 0; // ����Ŭ Ƚ�� �˾ƺ���
	cin >> num; // ���ڹޱ� 
	if (num < 10)//10���� ������ 
		num *= 10; result = num;



	while (1) {
		firstnum = result / 10; // ù° �ڸ� ���� 
		secondnum = result % 10; // ��° �ڸ� ����(���������� 
		sumnum = firstnum + secondnum; // ���� �� 
		result = (secondnum * 10) + (sumnum % 10); // 
		cnt++; // ����Ŭ Ƚ�� 
		if (num == result) // ����Ŭ ���� �Է°��� ������ Ż�� 
			break;
	}

	cout << cnt; // �� ������� }

}
