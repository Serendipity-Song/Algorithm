
#include <iostream>
using namespace std;


int main() {


	int num; // ó�� �Է¹��� ��.
	int first_num; // ���ڸ� ��
	int second_num; // ���ڸ� ��
	int sum_num; //������ ��
	int result = 0;// �Է°�=�������� �Ǻ��ϱ� ���� �����
	int cir=0; // �ݺ� Ƚ�� (��°�)

	cin >> num; //���� �ޱ�


	while (1) {		

			//���� 10���� ���� ���� first_num
			first_num = result / 10;
			//���� 10���� ���� �������� second_num�� ����
			second_num = result % 10;


			//���ο� ���� sum_num�� �־��ֱ�
			sum_num = first_num + second_num;

			result = (second_num*10) + (sum_num/10);

			cir++;

			if (num == result)
				break;
			
			
		}
		
		cout << cir << endl;
}


//#include<iostream> 
//using namespace std; 
//
//
//int main() {
//	int num; //�Է��� ���� 
//	int firstNum; //ù° �ڸ� 
//	int secondNum;//��° �ڸ� 
//	int sumNum; // ù���ڸ� + �Ѥ��ڸ� 
//	int result = 0; // ����Ŭ�� ���� ��� 
//	int cnt = 0; // ����Ŭ Ƚ�� 
//	cin >> num; // ���ڹޱ� 
//	if (num < 10)//10���� ������ 
//		num *= 10; result = num;
//
//
//
//	while (1) {
//		firstNum = result / 10; // ù° �ڸ� ���� 
//		secondNum = result % 10; // ��° �ڸ� ����(���������� 
//		sumNum = firstNum + secondNum; // ���� �� 
//		result = (secondNum * 10) + (sumNum % 10); // 
//		cnt++; // ����Ŭ Ƚ�� 
//		if (num == result) // ����Ŭ ���� �Է°��� ������ Ż�� 
//			break;
//	}
//
//	cout << cnt; // �� ������� }
//
//}
